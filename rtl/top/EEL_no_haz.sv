`timescale 1ns/1ps

`include "pipeline_reg.svh"

module EEL (
    input CLK,
    input RST
);

    pipeline_reg_t fd, de, em, mw;
    
    logic [31:0] pc_in;
    logic [31:0] next_pc;
    logic [31:0] pc_out;
    logic [31:0] ir;
    assign next_pc = pc_out + 4;

    MUX4T1 PC_MUX(
        .SEL(2'b00), // hardcoded to nextpc until flow control is established
        .D0(next_pc),
        .D1(), // jalr
        .D2(), // branch
        .D3(), // jal
        .DOUT(pc_in) // pc_in
    );

    PC PROG_COUNTER(
        .CLK(CLK),
        .RST(RST),
        .PC_EN(1'b1), // hardcoded to never stall (will change with flow control logic)
        .PC_IN(pc_in),
        .PC_OUT(pc_out)
    );

    IMEM PROG_MEMORY(
        .CLK(CLK),
        .RDEN(1'b1), // hardcoded to never stall
        .ADDR(pc_out[15:2]),
        .MEM_OUT(ir)
    );

    always_ff@(posedge CLK) begin
        fd.PC         <= pc_out;
        fd.NEXTPC     <= next_pc;
        fd.IR         <= ir;
        fd.ADDR1      <= ir[19:15];
        fd.ADDR2      <= ir[24:20];
        fd.WADDR      <= ir [11:7];
    end

    logic [31:0] rs1, rs2, w_data;


    REG_FILE RF(
        .CLK(CLK),
        .ADDR1(fd.ADDR1),
        .ADDR2(fd.ADDR2),
        .W_ADDR(mw.WADDR),
        .W_EN(mw.REG_WRITE),
        .W_DATA(w_data),
        .RS1(rs1),
        .RS2(rs2)
    );

    logic [1:0] pc_sel;
    logic [1:0] rf_sel;
    logic reg_write;
    logic mem_write;
    logic mem_read;
    logic [1:0] byte_sel;
    logic sign;
    logic branch;
    logic [2:0] br_type;
    logic jump;
    logic [3:0] alu_fun;
    logic src_a_sel;
    logic [1:0] src_b_sel;
    logic [2:0] imm_sel;
    logic [31:0] imm;

    logic [31:0] alu_op_a;
    logic [31:0] alu_op_b;
    logic [31:0] alu_result;
    logic zero;

    DECODER CTRL_UNIT(
        .OPCODE(fd.IR[6:0]),
        .FUNC3(fd.IR[14:12]),
        .FUNC7(fd.IR[30]),
        .PC_SEL(pc_sel),
        .RF_SEL(rf_sel),
        .REG_WRITE(reg_write),
        .MEM_WRITE(mem_write),
        .MEM_READ(mem_read),
        .BYTE_SEL(byte_sel),
        .SIGN(sign),
        .BRANCH(branch),
        .BR_TYPE(br_type),
        .JUMP(jump),
        .ALU_FUN(alu_fun),
        .SRC_A_SEL(src_a_sel),
        .SRC_B_SEL(src_b_sel),
        .IMM_SEL(imm_sel)
    );

    EXTENDER IMM_GEN(
        .IR(fd.IR[31:7]),
        .IMM_SEL(imm_sel),
        .IMM(imm)
    );

    always@(posedge CLK) begin
        // signals passed from fetch stage
        de.PC         <= fd.PC;
        de.NEXTPC     <= fd.NEXTPC;
        de.IR         <= fd.IR;
        de.ADDR1      <= fd.ADDR1;
        de.ADDR2      <= fd.ADDR2;
        de.WADDR      <= fd.WADDR;

        // signals generated in DECODE
        de.RS1        <= rs1;
        de.RS2        <= rs2;
        de.RF_SEL     <= rf_sel;
        de.REG_WRITE  <= reg_write;
        de.PC_SEL     <= pc_sel;
        de.MEM_WRITE  <= mem_write;
        de.MEM_READ   <= mem_read;
        de.SIGN       <= sign;
        de.BYTE_SEL   <= byte_sel;
        de.BRANCH     <= branch;
        de.BR_TYPE    <= br_type;
        de.JUMP       <= jump;
        de.ALU_FUN    <= alu_fun;
        de.SRC_A_SEL  <= src_a_sel;
        de.SRC_B_SEL  <= src_b_sel;
        de.IMM_SEL    <= imm_sel;
        de.IMM        <= imm;
    end

    MUX2T1 ALU_SRC_A(
        .D0(de.RS1),
        .D1(de.IMM),
        .SEL(de.SRC_A_SEL),
        .DOUT(alu_op_a)
    );

    MUX4T1 ALU_SRC_B(
        .D0(de.RS2),
        .D1(de.IMM),
        .D2(de.PC),
        .D3(32'b0), // could make nextpc if needed
        .SEL(de.SRC_B_SEL),
        .DOUT(alu_op_b)
    );

    ALU EEL_ALU(
        .OP_A(alu_op_a),
        .OP_B(alu_op_b),
        .ALU_FUN(de.ALU_FUN),
        .RESULT(alu_result),
        .ZERO(zero)
    );

    always@(posedge CLK) begin
       // signals generating in FETCH
        em.PC         <= de.PC;       
        em.NEXTPC     <= de.NEXTPC;     
        em.IR         <= de.IR;         
        em.ADDR1      <= de.ADDR1;      
        em.ADDR2      <= de.ADDR2;      
        em.WADDR      <= de.WADDR;  

        // signals generated in DECODE
        em.RS1       <= de.RS1;
        em.RS2       <= de.RS2;
        em.RF_SEL    <= de.RF_SEL;
        em.REG_WRITE <= de.REG_WRITE;

        em.MEM_WRITE <= de.MEM_WRITE;
        em.MEM_READ  <= de.MEM_READ;
        em.SIGN      <= de.SIGN;
        em.BYTE_SEL  <= de.BYTE_SEL;

        // signals generated in EXECUTE
        em.ALU_RESULT <= alu_result;
        em.ZERO <= zero;    
    end

    logic [31:0] dout;

    DMEM DATA_MEMORY(
        .CLK(CLK),
        .RDEN(em.MEM_READ),
        .WEN(em.MEM_WRITE),
        .BYTE_SEL(em.BYTE_SEL),
        .SIGN(em.SIGN),
        .ADDR(em.ALU_RESULT[15:2]),
        .DATA_IN(em.RS2),
        .DATA_OUT(dout)
    );

    always@(posedge CLK) begin
       // signals generating in FETCH
        mw.PC         <= em.PC;         
        mw.NEXTPC     <= em.NEXTPC;     
        mw.RS1        <= em.RS1;
        mw.RS2        <= em.RS2;
        mw.IR         <= em.IR;  
        mw.ADDR1      <= em.ADDR1;      
        mw.ADDR2      <= em.ADDR2;      
        mw.WADDR      <= em.WADDR; 
        mw.RF_SEL     <= em.RF_SEL;
        mw.REG_WRITE  <= em.REG_WRITE;
        mw.ALU_RESULT <= em.ALU_RESULT;  
    end

    MUX4T1 RF_MUX(
        .D0(mw.NEXTPC),
        .D1(),
        .D2(dout),
        .D3(mw.ALU_RESULT),
        .SEL(mw.RF_SEL),
        .DOUT(w_data)
    );
endmodule
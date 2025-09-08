`timescale 1ns/1ps

`include "pipeline_reg.svh"

module EEL (
    input CLK,
    input RST
);

    pipeline_reg_t fd, de, em, mw;
    
    logic stall;
    logic flush;

    // CONTROL SIGNALS
    logic [1:0] fwd_rs1, fwd_rs2;
        // 2'b00: NO FWD
        // 2'b01: EXECUTE FWD
        // 2'b10: MEM FWD
        // 2'b11: WB FWD
    logic fwd_srca, fwd_srcb, fwd_din;
        // 1'b0: NO FWD
        // 1'b1: FWD

    // FORWARDED DATA LINED 
    logic [31:0] rs1_fwd, rs2_fwd, srca_fwd, srcb_fwd, din_fwd;
    
    logic [31:0] pc_in;
    logic [31:0] next_pc;
    logic [31:0] pc_out;
    logic [31:0] ir;
    assign next_pc = pc_out + 4;
    
    logic [31:0] rs1, rs2, w_data;

    logic [1:0] pc_sel;
    logic [1:0] decoder_pc_sel;
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
    
    logic [31:0] dout;

    HAZ_UNIT HAZ_CTRL(

        .CLK(CLK),
        
        .F_ADDR1(ir[19:15]),
        .F_ADDR2(ir[24:20]),
        .F_WADDR(ir[11:7]),
        .F_OP   (ir[6:0]),
        
        .D_ADDR1(fd.IR[19:15]),
        .D_ADDR2(fd.IR[24:20]),
        .D_WADDR(fd.IR[11:7]),
        .D_OP   (fd.IR[6:0]),

        .E_ADDR1(de.IR[19:15]),
        .E_ADDR2(de.IR[24:20]),
        .E_WADDR(de.IR[11:7]),
        .E_OP   (de.IR[6:0]),

        .M_ADDR1(em.IR[19:15]),
        .M_ADDR2(em.IR[24:20]),
        .M_WADDR(em.IR[11:7]),
        .M_OP   (em.IR[6:0]),

        .W_ADDR1(mw.IR[19:15]),
        .W_ADDR2(mw.IR[24:20]),
        .W_WADDR(mw.IR[11:7]),
        .W_OP   (mw.IR[6:0]),

        .STALL(stall),
        .FLUSH(flush),

        .PC_SEL(pc_sel),
        .FWD_RS1(fwd_rs1),
        .FWD_RS2(fwd_rs2),
        .FWD_SRCA(fwd_srca),
        .FWD_SRCB(fwd_srcb),
        .FWD_DIN(fwd_din)
    
    );


    MUX4T1 PC_MUX(
        .SEL(pc_sel), // hardcoded to nextpc until flow control is established
        .D0(next_pc),
        .D1((pc_out) + ({{12{ir[31]}}, ir[19:12], ir[20], ir[30:21], 1'b0})), // jal
        .D2(), // jalr
        .D3(), // branch
        .DOUT(pc_in) // pc_in
    );

    PC PROG_COUNTER(
        .CLK(CLK),
        .RST(RST),
        .PC_EN(!stall), // hardcoded to never stall (will change with flow control logic)
        .PC_IN(pc_in),
        .PC_OUT(pc_out)
    );

    IMEM PROG_MEMORY(
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

        if(stall) begin
            fd.PC         <= fd.PC;    
            fd.NEXTPC     <= fd.NEXTPC;
            fd.IR         <= fd.IR;    
            fd.ADDR1      <= fd.ADDR1; 
            fd.ADDR2      <= fd.ADDR2; 
            fd.WADDR      <= fd.WADDR; 
        end

    end

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

    MUX4T1 FWD_RS1_MUX(
        .SEL(fwd_rs1),
        .D0(rs1),
        .D1(alu_result),
        .D2(em.ALU_RESULT),
        .D3(w_data),
        .DOUT(rs1_fwd)
    );

    MUX4T1 FWD_RS2_MUX(
        .SEL(fwd_rs2),
        .D0(rs2),
        .D1(alu_result),
        .D2(em.ALU_RESULT),
        .D3(w_data),
        .DOUT(rs2_fwd)
    );

    MUX2T1 FWD_SRCA_MUX(
        .SEL(fwd_srca),
        .D0(de.RS1),
        .D1(w_data),
        .DOUT(srca_fwd)
    );

    MUX2T1 FWD_SRCB_MUX(
        .SEL(fwd_srcb),
        .D0(de.RS2),
        .D1(w_data),
        .DOUT(srcb_fwd)
    );

    DECODER CTRL_UNIT(
        .OPCODE(fd.IR[6:0]),
        .FUNC3(fd.IR[14:12]),
        .FUNC7(fd.IR[30]),
        .PC_SEL(decoder_pc_sel),
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
        de.RS1        <= rs1_fwd;
        de.RS2        <= rs2_fwd;
        de.RF_SEL     <= rf_sel;
        de.REG_WRITE  <= reg_write;
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

        if(stall) begin
            de.PC         <= 'b0;                   
            de.NEXTPC     <= 'b0;           
            de.IR         <= 'b0;                   
            de.ADDR1      <= 'b0;      
            de.ADDR2      <= 'b0;     
            de.WADDR      <= 'b0;      
            de.RS1        <= 'b0;        
            de.RS2        <= 'b0;        
            de.RF_SEL     <= 'b0;           
            de.REG_WRITE  <= 'b0;     
            de.PC_SEL     <= 'b0;           
            de.MEM_WRITE  <= 'b0;    
            de.MEM_READ   <= 'b0;       
            de.SIGN       <= 'b0;               
            de.BYTE_SEL   <= 'b0;       
            de.BRANCH     <= 'b0;           
            de.BR_TYPE    <= 'b0;         
            de.JUMP       <= 'b0;               
            de.ALU_FUN    <= 'b0;         
            de.SRC_A_SEL  <= 'b0;     
            de.SRC_B_SEL  <= 'b0;     
            de.IMM_SEL    <= 'b0;       
            de.IMM        <= 'b0;        
        end          
    end

    MUX2T1 ALU_SRC_A(
        .D0(srca_fwd),
        .D1(de.IMM),
        .SEL(de.SRC_A_SEL),
        .DOUT(alu_op_a)
    );

    MUX4T1 ALU_SRC_B(
        .D0(srcb_fwd),
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
        em.RS1        <= srca_fwd;
        em.RS2        <= srcb_fwd;
        em.RF_SEL     <= de.RF_SEL;
        em.REG_WRITE  <= de.REG_WRITE;
 
        em.MEM_WRITE  <= de.MEM_WRITE;
        em.MEM_READ   <= de.MEM_READ;
        em.SIGN       <= de.SIGN;
        em.BYTE_SEL   <= de.BYTE_SEL;

        // signals generated in EXECUTE
        em.ALU_RESULT <= alu_result;
        em.ZERO       <= zero;  
    end
    
    MUX2T1 FWD_DIN_MUX(
        .SEL(fwd_din),
        .D0(em.RS2),
        .D1(w_data),
        .DOUT(din_fwd)
    );
    DMEM DATA_MEMORY(
        .CLK(CLK),
        .RDEN(em.MEM_READ),
        .WEN(em.MEM_WRITE),
        .BYTE_SEL(em.BYTE_SEL),
        .SIGN(em.SIGN),
        .ADDR(em.ALU_RESULT[15:2]),
        .DATA_IN(din_fwd),
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
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


endmodule
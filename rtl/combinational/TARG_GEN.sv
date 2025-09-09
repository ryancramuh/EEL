`timescale 1ns/1ps
`include "opcodes.svh"

module TARG_GEN (
    input [31:0] F_IR,
    input [31:0] F_PC,
    input [31:0] D_PC,
    input [31:0] RS1,
    input [31:0] EXT,
    input [1:0] STAGE_SEL,
    output logic [31:0] JAL,
    output logic [31:0] JALR,
    output logic [31:0] BRANCH
);

    // FETCH
    // Must be extended and added

    logic [31:0] FETCH_I;
    logic [31:0] FETCH_B;
    logic [31:0] FETCH_J;

    assign FETCH_I = {{21{F_IR[31]}}, F_IR[30:25], F_IR[24:20]};
    assign FETCH_B = {{20{F_IR[31]}}, F_IR[7], F_IR[30:25], F_IR[11:8], 1'b0};
    assign FETCH_J = {{12{F_IR[31]}}, F_IR[19:12], F_IR[20], F_IR[30:21], 1'b0};

 //   reference from EXTENDER
 //   assign I_TYPE = {{21{IR[24]}}, IR[23:18], IR[17:13]};
 //   assign B_TYPE = {{20{IR[24]}}, IR[0], IR[23:18], IR[4:1], 1'b0};
 //   assign J_TYPE = {{12{IR[24]}}, IR[12:5], IR[13], IR[23:14], 1'b0};
    
    logic [31:0] FETCH_JAL;
    logic [31:0] FETCH_JALR;
    logic [31:0] FETCH_BRANCH;
    
    assign FETCH_JAL = (F_PC + FETCH_J);
    assign FETCH_JALR = (RS1 + FETCH_I);
    assign FETCH_BRANCH = (F_PC + FETCH_B);

endmodule
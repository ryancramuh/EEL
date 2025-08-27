`timescale 1ns/1ps

module HAZARD (
    input [4:0]  D_ADDR1,
    input [4:0]  D_ADDR2,
    input [4:0]  D_WADDR,
    input [31:0] D_IR,
    input D_MEM_READ,

    input [4:0]  E_ADDR1,
    input [4:0]  E_ADDR2,
    input [4:0]  E_WADDR,
    input [31:0] E_IR,

    
    output logic FWD_A_SEL,
    output logic FWD_B_SEL,
    output logic FWD_MEM_SEL
);

    always_comb

    always_comb begin

endmodule
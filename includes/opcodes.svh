`ifndef OPCODES_SVH
`define OPCODES_SVH

parameter LUI    = 7'b0110111; // rd
parameter AUIPC  = 7'b0010111; // rd 
parameter STORE  = 7'b0100011; // rs1 and rs2
parameter LOAD   = 7'b0000011; // rs1 and rd
parameter IMM    = 7'b0010011; // rs1 and rd
parameter REG    = 7'b0110011; // rs1 and rs2 and rd
parameter JAL    = 7'b1101111; // rd 
parameter JALR   = 7'b1100111; // rd and rs1
parameter BRANCH = 7'b1100011; // rs1 and rs2

`endif

/*
    LUI = 37
    AUIPC = 17
    STORE = 23
    LOAD = 03
    IMM = 13
    REG = 33, b3
    JAL = 6f
    JALR = 67
    BRANCH = 63
*/
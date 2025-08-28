`ifndef OPCODES_SVH
`define OPCODES_SVH

parameter LUI    = 7'b0110111;
parameter AUIPC  = 7'b0010111;
parameter STORE  = 7'b0100011;
parameter LOAD   = 7'b0000011;
parameter IMM    = 7'b0010011;
parameter REG    = 7'b0110011;
parameter JAL    = 7'b1101111;
parameter JALR   = 7'b1100111;
parameter BRANCH = 7'b1100011;

`endif
`ifndef PIPELINE_REG_SVH
`define PIPELINE_REG_SVH

parameter XLEN = 32;
typedef struct packed {
    
    // PC and IMEM signals
    logic [XLEN-1:0] PC;
    logic [XLEN-1:0] NEXTPC;
    logic [XLEN-1:0] IR;
    logic [1:0]  PC_SEL;

    // Register File signals
    logic [XLEN-1:0] RS1;
    logic [XLEN-1:0] RS2;
    logic [4:0]  ADDR1;
    logic [4:0]  ADDR2;
    logic [4:0]  WADDR;
    logic [1:0] RF_SEL;
    logic REG_WRITE;
    
    // Extender Signals
    logic [2:0]  IMM_SEL;
    logic [31:0] IMM;
    
    // ALU Signals
    logic [3:0] ALU_FUN;
    logic SRC_A_SEL;
    logic [1:0] SRC_B_SEL;
    logic [XLEN-1:0] ALU_RESULT;
    logic ZERO;

    // DMEM Signals
    logic MEM_WRITE;
    logic MEM_READ;
    logic [1:0] BYTE_SEL;
    logic SIGN;

    // Flow Control Signals
    logic BRANCH;
    logic [2:0] BR_TYPE;
    logic JUMP;
    logic TRANSFER_RESOLVED;
    logic STALL;
    logic FLUSH;

} pipeline_reg_t;

`endif
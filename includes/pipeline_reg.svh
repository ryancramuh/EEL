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
    logic [1:0] RF_SEL;
    logic REG_WRITE;
    
    // Extender Signals
    logic [2:0]  IMM_SEL;
    logic [31:0] IMM;
    
    // ALU Signals
    logic [3:0] ALU_FUN;
    logic ALU_SRC_A;
    logic [1:0] ALU_SRC_B;
    logic [XLEN-1:0] ALU_RESULT;
    logic ZERO;

    // DMEM Signals
    logic MEM_WRITE;
    logic MEM_READ;
    logic BYTE_SEL;

    // Flow Control Signals
    logic BRANCH;
    logic BR_TYPE;
    logic JUMP;

    logic STALL;
    logic FLUSH;

} pipeline_reg_t;

`endif
`timescale 1ns/1ps

module HAZARD (
    input [4:0]  D_ADDR1,
    input [4:0]  D_ADDR2,
    input [4:0]  D_WADDR,
    input [6:0] D_OP,
    input D_MEM_READ,

    input [4:0]  E_ADDR1,
    input [4:0]  E_ADDR2,
    input [4:0]  E_WADDR,
    input [31:0] E_IR,

    
    output logic FWD_A_SEL,
    output logic FWD_B_SEL,
    output logic FWD_MEM_SEL
);

    /* Hazards are generated if source operand address (addr1 or addr2) is the same as the destination address (waddr)
     * 
     * Every waddr will be compared with addr1 and addr2 in the decode stage
     *      - if store then load hazard, you must stall for store to be available for load  
     *      - if load and then store, forward DATA_OUT to DATA_IN of DMEM
     *      - if load then use hazard, you must stall then resolve by forwarding dout 
     *      - if normal data hazard, pipe ALU result from E, M, or W. */

    
endmodule
`timescale 1ns/1ps

module HAZARD (

    input [4:0]  D_ADDR1,
    input [4:0]  D_ADDR2,
    input [4:0]  D_WADDR,
    input [6:0]  D_OP,
    input        D_MEM_READ,
    input        D_MEM_WRITE,

    input [4:0]  E_ADDR1,
    input [4:0]  E_ADDR2,
    input [4:0]  E_WADDR,
    input [6:0]  E_OP,
    input        E_MEM_READ,
    input        E_MEM_WRITE,

    input [4:0]  M_ADDR1,
    input [4:0]  M_ADDR2,
    input [4:0]  M_WADDR,
    input [6:0]  M_OP,
    input        M_MEM_READ,
    input        M_MEM_WRITE,

    input [4:0]  W_ADDR1,
    input [4:0]  W_ADDR2,
    input [4:0]  W_WADDR,
    input [6:0]  W_OP,
    input        W_MEM_READ,
    input        W_MEM_WRITE,


    output logic FWD_A_SEL,
    output logic FWD_B_SEL,
    output logic SW_SEL
);

    /* Hazards are generated if source operand address (addr1 or addr2) is the same as the destination address (waddr)
     * 
     * Every waddr will be compared with addr1 and addr2 in the decode stage
     *      - if load and then store, 
                    if RS2 forward DATA_OUT to DATA_IN of DMEM
                    if RS1 stall the STORE at DECODE and then the next cycle forward DOUT to RS1
     *      - if load then use hazard, you must stall then resolve by forwarding dout 
     *      - if normal data hazard, pipe ALU result from E, M, or W. */

    
endmodule
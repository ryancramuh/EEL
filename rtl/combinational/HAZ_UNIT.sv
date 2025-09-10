`timescale 1ns/1ps

`include "opcodes.svh"

module HAZ_UNIT (

    input CLK,

    input [4:0]  F_ADDR1,
    input [4:0]  F_ADDR2,
    input [4:0]  F_WADDR,
    input [6:0]  F_OP,

    input [4:0]  D_ADDR1,
    input [4:0]  D_ADDR2,
    input [4:0]  D_WADDR,
    input [6:0]  D_OP,

    input [4:0]  E_ADDR1,
    input [4:0]  E_ADDR2,
    input [4:0]  E_WADDR,
    input [6:0]  E_OP,

    input [4:0]  M_ADDR1,
    input [4:0]  M_ADDR2,
    input [4:0]  M_WADDR,
    input [6:0]  M_OP,

    input [4:0]  W_ADDR1,
    input [4:0]  W_ADDR2,
    input [4:0]  W_WADDR,
    input [6:0]  W_OP,

    output logic STALL,
    output logic FLUSH,

    output logic [1:0] FWD_RS1,
    output logic [1:0] FWD_RS2,

    output logic FWD_SRCA, 
    output logic FWD_SRCB, 
    output logic FWD_DIN,

    output logic [1:0] PC_SEL
);

    /* Hazards are generated if source operand address (addr1 or addr2) is the same as the destination address (waddr)
     * 
     * Every waddr will be compared with addr1 and addr2 in the decode stage
     *      - if load and then store, 
                    if RS2 forward DATA_OUT to DATA_IN of DMEM
                    if RS1 stall the STORE at DECODE and then the next cycle forward DOUT to RS1
     *      - if load then use hazard, you must stall then resolve by forwarding dout 
     *      - if normal data hazard, pipe ALU result from E, M, or W. */


    // pipeline control
    logic load_use_stall;

    // flow forwards
    logic df_fwd1;
    logic df_fwd2;
    logic ef_fwd1;
    logic ef_fwd2;
    logic mf_fwd1;
    logic mf_fwd2;
    logic wf_fwd1;
    logic wf_fwd2;

    // regular forwards
    logic ed_fwd1;
    logic ed_fwd2;
    logic md_fwd1;
    logic md_fwd2;
    logic wd_fwd1;
    logic wd_fwd2;
    
     // special cases
    logic wm_load_fwd2;
    logic we_load_fwd1;
    logic we_load_fwd2;


    // PIPELINE CONTROL
    assign load_use_stall = // LOAD-USE happens when Decode's RS1 or RS1 is equal to Execute's RD
    (
     ((D_ADDR1 == E_WADDR) || (D_ADDR2 == E_WADDR)) &&
     (E_OP == LOAD)
    ); 

    // FLOW FORWARDS 

    logic df_fwd1;
    logic df_fwd2;
    logic ef_fwd1;
    logic ef_fwd2;
    logic mf_fwd1;
    logic mf_fwd2;
    logic wf_fwd1;
    logic wf_fwd2;


    // NON-FLOW FORWARDS
    assign ed_fwd1 = 
    ( 
        (D_ADDR1 == E_WADDR) && 
        (D_OP != LUI)&&
        (D_OP != AUIPC) && 
        (D_OP != JAL) && 
        (E_OP != STORE) &&
        (E_OP != LOAD) && 
        (E_WADDR != 5'b00000)
    );
    
    assign ed_fwd2 = 
    (
        (D_ADDR2 == E_WADDR) && 
        (D_OP != LUI)&&
        (D_OP != AUIPC) &&
        (D_OP != JAL) &&
        (D_OP != IMM) &&
        (E_OP != STORE) && 
        (E_OP != LOAD) &&
        (E_WADDR != 5'b00000)
    );

    assign md_fwd1 = 
    (
        (D_ADDR1 == M_WADDR) && 
        (D_OP != LUI) &&
        (D_OP != AUIPC) && 
        (D_OP != JAL) &&
        (M_OP != STORE) && 
        (M_OP != LOAD) && 
        (M_WADDR != 5'b00000) && 
        !ed_fwd1
    );

    assign md_fwd2 = 
    (
        (D_ADDR2 == M_WADDR) && 
        (D_OP != LUI)&&
        (D_OP != AUIPC) && 
        (D_OP != JAL) && 
        (D_OP != IMM) &&
        (M_OP != STORE) && 
        (M_OP != LOAD) && 
        (M_WADDR != 5'b00000) && 
        !ed_fwd2
    );

    assign wd_fwd1 = 
    (
        (D_ADDR1 == W_WADDR) && 
        (D_OP != LUI)&&
        (D_OP != AUIPC) && 
        (D_OP != JAL) &&
        (W_OP != STORE)&& 
        (W_WADDR != 5'b00000) && 
        !ed_fwd1 && 
        !md_fwd1 
    );
    
    assign wd_fwd2 = 
    (
        (D_ADDR2 == W_WADDR) && 
        (D_OP != LUI)&&
        (D_OP != AUIPC) && 
        (D_OP != JAL) &&
        (D_OP != IMM) &&
        (W_OP != STORE) && 
        (W_WADDR != 5'b00000) && 
        !ed_fwd2 && 
        !md_fwd2            
    );
    
    // NON-FLOW FORWARD SPECIAL CASES
    assign wm_load_fwd2 = ((M_OP == STORE) && (W_OP == LOAD) && (W_WADDR == M_ADDR2));
    assign we_load_fwd1 = ((W_OP == LOAD) && (M_OP == 7'b000_0000) && (E_ADDR1 == W_WADDR));
    assign we_load_fwd2 = ((W_OP == LOAD) && (M_OP == 7'b000_0000) && (E_ADDR2 == W_WADDR)); 
    

    

    // RS1 Forward Handling Block
    always_comb begin
        
        FWD_RS1 = 2'b00; // normal RS1 in MEM
        FWD_SRCA = 1'b0; // normal RS1 in DE

        if(ed_fwd1) begin
            FWD_RS1 = 2'b01; // EXECUTE 
        end
        else if (md_fwd1) begin
            FWD_RS1 = 2'b10; // MEMORY
        end
        
        else if (wd_fwd1) begin
            FWD_RS1 = 2'b11; // WRITEBACK
        end
        
        if (we_load_fwd1) begin
            FWD_SRCA = 1'b1; // LOAD to EXECUTE
        end

    end

    // RS2 Forward Handling Block
    always_comb begin

        FWD_RS2 = 2'b00; // normal RS2 in DE
        FWD_SRCB = 1'b0; // normal RS2 in EX
        FWD_DIN = 1'b0;  // normal RS2 in MEM
        
        if(ed_fwd2) begin
            FWD_RS2 = 2'b01; // EXECUTE 
        end
        
        else if (md_fwd2) begin
            FWD_RS2 = 2'b10; // MEMORY
        end
        
        else if (wd_fwd2) begin
            FWD_RS2 = 2'b11; // WRITEBACK
        end
        
        if (we_load_fwd2) begin
            FWD_SRCB = 1'b1; // LOAD to EXECUTE
        end
        
        if (wm_load_fwd2) begin
            FWD_DIN = 1'b1; // LOAD to STORE
        end

    end

    // LOAD-USE BLOCK
    always_comb begin
        
        STALL = 1'b0;
        FLUSH = 1'b0; 

        if(load_use_stall) begin
            STALL = 1'b1;
        end
        
        if(flush_jalr && !load_use_stall) begin
            FLUSH = 1'b1;
        end
        
                 
    end

    // PC Mux select handling 
    always_comb begin

        PC_SEL = 2'b00;

    end


endmodule
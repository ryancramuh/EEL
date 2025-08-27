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

    logic FWD_EX1       = ((D_ADDR1 == E_WADDR) && (!E_MEM_WRITE) && (!M_MEM_WRITE));
    logic FWD_EX2       = ((D_ADDR2 == E_WADDR) && (!E_MEM_WRITE) && (!M_MEM_WRITE));
    logic FWD_MEM1
    logic FWD_MEM2
    logic FWD_WB1
    logic FWD_WB2
    logic STALL1_EX_DEP = 
    logic STALL2_EX_DEP = 
    logic STALL1_MEM_DEP = 
    logic STALL2_MEM_DEP = 

    always_comb begin
        
        if((M_WADDR == D_ADDR1) || (M_WADDR == D_ADDR2)) begin
            if(M_WADDR == D_ADDR1) begin
                FWD_A_SEL = 2'b11; // wdata
            end
            else begin
                FWD_B_SEL = 2'b11; // wdata
            end
        end

        if(())
    end
endmodule
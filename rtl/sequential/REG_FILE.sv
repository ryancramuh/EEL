`timescale 1ns/1ps

// module: Register File
// author: Ryan Cramer

module REG_FILE(
    input CLK,
    input [4:0] ADDR1,
    input [4:0] ADDR2,
    input [4:0] W_ADDR,
    input W_EN,
    input [31:0] W_DATA,
    output logic [31:0] RS1,
    output logic [31:0] RS2
);

    logic [31:0] reg_32x32 [0:31];
    
    always_comb begin // asynchronous reads
        if(ADDR1 != 5'b00000) begin
            RS1 = reg_32x32[ADDR1];
        end
        else begin
            RS1 = 32'b0;
        end
        if(ADDR2 != 5'b00000) begin
            RS2 = reg_32x32[ADDR2];
        end
        else begin
            RS2 = 32'b0;
        end
    end

    always_ff@(posedge CLK) begin // synchronous writes
        
        if(W_EN) begin
            reg_32x32[W_ADDR] <= W_DATA;
        end
        
        else begin
            reg_32x32[W_ADDR] <= reg_32x32[W_ADDR];
        end

    end
endmodule
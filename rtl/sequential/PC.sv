`timescale 1ns/1ps

module PC(
    input CLK,
    input RST,
    input PC_EN,
    input [31:0] PC_IN,
    output logic [31:0] PC_OUT
);

    always_ff @ (posedge CLK) begin
        if (RST) begin
            PC_OUT <= 32'h0000_0000;
        end
        else if (PC_EN) begin
            PC_OUT <= PC_IN;
        end 
        else
            PC_OUT <= PC_OUT;
    end

endmodule
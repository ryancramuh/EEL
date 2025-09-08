`timescale 1ns/1ps

// module: tb_EEL
// author: Ryan Cramer
`include "opcodes.svh"
module tb_EEL();
    
    logic CLK;
    logic RST;

    EEL UUT(
        .CLK(CLK),
        .RST(RST)
    );

    initial begin
        $dumpfile("tb_EEL.vcd");
        $dumpvars(2,tb_EEL);
    end

    initial begin
        #5 CLK = 1'b0;
        forever #5 CLK = ~CLK;
    end
    
    always begin
        #10 RST <= 1'b0;
        #360 RST <= 1'b1;
        #10 $finish;
    end

        

endmodule
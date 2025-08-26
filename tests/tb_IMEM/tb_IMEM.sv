`timescale 1ns/1ps

module tb_IMEM ();

    logic CLK;
    logic RDEN;
    logic [31:0] PC_OUT;
    logic [13:0] ADDR;
    
    assign ADDR = PC_OUT[15:2];

    IMEM UUT(
        .CLK(CLK),
        .RDEN(RDEN),
        .ADDR(ADDR),
        .MEM_OUT()
    );

    initial begin
        $dumpfile("tb_IMEM.vcd");
        $dumpvars(0, tb_IMEM);
    end

    initial begin
        #5 CLK = 1'b0;
        forever #5 CLK = ~CLK;
    end

    always begin
        
        $monitorh("instruction: ", UUT.MEM_OUT);
        
        #10 RDEN <= 1'b0;
            PC_OUT <= 32'd0;
        
        #10 RDEN <= 1'b1;
            PC_OUT <= 32'd0;
        
        #10 RDEN <= 1'b1;
            PC_OUT <= 32'd4;
        
        #10 RDEN <= 1'b1;
            PC_OUT <= 32'd8;
        
        #10 RDEN <= 1'b1;
            PC_OUT <= 32'd12;
        
        #10 RDEN <= 1'b1;
            PC_OUT <= 32'd16;
        
        #10 RDEN <= 1'b1;
            PC_OUT <= 32'd20;

        #10 RDEN <= 1'b1;
            PC_OUT <= 32'd24;
        

        #20 $finish;
    end
endmodule
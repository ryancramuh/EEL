`timescale 1ns/1ps

module tb_PC();

    logic CLK;
    logic RST;
    logic PC_EN;
    logic [31:0] PC_IN;
    
    PC UUT(
        .CLK(CLK),
        .RST(RST),
        .PC_EN(PC_EN),
        .PC_IN(PC_IN),
        .PC_OUT()
    );

    initial begin 
        $dumpfile("tb_PC.vcd");
        $dumpvars(0, tb_PC);
    end

    initial begin
        #5 CLK = 1'b0;
        forever #5 CLK = ~CLK;
    end

    always begin

        $monitorh("pc_out = ", UUT.PC_OUT);

        #10 RST <= 1'b1; // RESET
            PC_EN <= 1'b0;
            PC_IN <= 32'b0;

        #10 RST <= 1'b0; // WAIT
            PC_EN <= 1'b0;
            PC_IN <= 32'b0;

        #10 RST <= 1'b1; // TEST RESET PRIORITY 
            PC_EN <= 1'b1;
            PC_IN <= 32'hdeadbeef;

        #10 RST <= 1'b0; // TEST WRITE 
            PC_EN <= 1'b1;
            PC_IN <= 32'hdeadbeef;
        
        #10 RST <= 1'b0; // TEST WRITE
            PC_EN <= 1'b1;
            PC_IN <= 32'hdeadfeed;

        #20 $finish;
    end
endmodule
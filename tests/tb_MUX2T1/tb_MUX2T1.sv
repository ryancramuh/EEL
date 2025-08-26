`timescale 1ns/1ps

module tb_MUX2T1 ();

    logic [31:0] D0;
    logic [31:0] D1;
    logic SEL;
    
    MUX2T1 UUT(
        .D0(D0),
        .D1(D1),
        .SEL(SEL),
        .DOUT()
    );

    initial begin
        $dumpfile("tb_MUX2T1.vcd");
        $dumpvars(0,tb_MUX2T1);
    end

    initial begin
        D0 = 32'b0;
        D1 = 32'b0;
        SEL = 1'b0;
    end

    always begin

        #10 SEL <= 1'b0;
            D0 <= 32'hdeadbeef;
            D1 <= 32'hfeedfeed;
        
        #10 SEL <= 1'b1;
            D0 <= 32'hdeadbeef;
            D1 <= 32'hfeedfeed;
        
        #10 SEL <= 1'b0;
            D0 <= 32'hbeeeeeef;
            D1 <= 32'hfeedfeed;
        
        #10 SEL <= 1'b1;
            D0 <= 32'h0;
            D1 <= 32'hdaffadad;

        #10 $finish;

    end
endmodule
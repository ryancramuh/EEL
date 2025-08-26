`timescale 1ns/1ps

module tb_MUX4T1 ();

    logic [31:0] D0;
    logic [31:0] D1;
    logic [31:0] D2;
    logic [31:0] D3;
    logic [1:0] SEL;
    
    MUX4T1 UUT(
        .D0(D0),
        .D1(D1),
        .D2(D2),
        .D3(D3),
        .SEL(SEL),
        .DOUT()
    );

    initial begin
        $dumpfile("tb_MUX4T1.vcd");
        $dumpvars(0,tb_MUX4T1);
    end

    initial begin
        D0 = 32'b0;
        D1 = 32'b0;
        D2 = 32'b0;
        D3 = 32'b0;
        SEL = 2'b0;
    end

    always begin

        #10 SEL <= 2'b00;
            D0 <= 32'hdeadbeef;
            D1 <= 32'hfeedfeed;
            D2 <= 32'haaaadddd;
            D3 <= 32'hdadadada;
        
        #10 SEL <= 2'b01;
            D0 <= 32'hdeadbeef;
            D1 <= 32'hfeedfeed;
            D2 <= 32'haaaadddd;
            D3 <= 32'hdadadada;

        #10 SEL <= 2'b10;
            D0 <= 32'hdeadbeef;
            D1 <= 32'hfeedfeed;
            D2 <= 32'haaaadddd;
            D3 <= 32'hdadadada;

        #10 SEL <= 2'b11;
            D0 <= 32'hdeadbeef;
            D1 <= 32'hfeedfeed;
            D2 <= 32'haaaadddd;
            D3 <= 32'hdadadada;
    
        #10 $finish;

    end
endmodule
`timescale 1ns/1ps

module tb_MUX8T1 ();

    logic [31:0] D0;
    logic [31:0] D1;
    logic [31:0] D2;
    logic [31:0] D3;
    logic [31:0] D4;
    logic [31:0] D5;
    logic [31:0] D6;
    logic [31:0] D7;
    logic [2:0] SEL;
    
    MUX8T1 UUT(
        .D0(D0),
        .D1(D1),
        .D2(D2),
        .D3(D3),
        .D4(D4),
        .D5(D5),
        .D6(D6),
        .D7(D7),
        .SEL(SEL),
        .DOUT()
    );

    initial begin
        $dumpfile("tb_MUX8T1.vcd");
        $dumpvars(0,tb_MUX8T1);
    end

    initial begin
        D0 = 32'b0;
        D1 = 32'b0;
        D2 = 32'b0;
        D3 = 32'b0;
        D4 = 32'b0;
        D5 = 32'b0;
        D6 = 32'b0;
        D7 = 32'b0;
        SEL = 3'b0;
    end

    always begin

        #10 SEL <= 3'b000;     // SEL D0
            D0 <= 32'habababab;
            D1 <= 32'haaaabbbb;
            D2 <= 32'hacacacac;
            D3 <= 32'haaaacccc;
            D4 <= 32'hbcbcbcbc;
            D5 <= 32'hbbbbcccc;
            D6 <= 32'hdcdcdcdc;
            D7 <= 32'hddddcccc;
        
        #10 SEL <= 3'b001;     // SEL D1
            D0 <= 32'habababab;
            D1 <= 32'haaaabbbb;
            D2 <= 32'hacacacac;
            D3 <= 32'haaaacccc;
            D4 <= 32'hbcbcbcbc;
            D5 <= 32'hbbbbcccc;
            D6 <= 32'hdcdcdcdc;
            D7 <= 32'hddddcccc;
        
        #10 SEL <= 3'b010;     // SEL D2
            D0 <= 32'habababab;
            D1 <= 32'haaaabbbb;
            D2 <= 32'hacacacac;
            D3 <= 32'haaaacccc;
            D4 <= 32'hbcbcbcbc;
            D5 <= 32'hbbbbcccc;
            D6 <= 32'hdcdcdcdc;
            D7 <= 32'hddddcccc;
        
        #10 SEL <= 3'b011;     // SEL D3
            D0 <= 32'habababab;
            D1 <= 32'haaaabbbb;
            D2 <= 32'hacacacac;
            D3 <= 32'haaaacccc;
            D4 <= 32'hbcbcbcbc;
            D5 <= 32'hbbbbcccc;
            D6 <= 32'hdcdcdcdc;
            D7 <= 32'hddddcccc;
        
        #10 SEL <= 3'b100;     // SEL D4
            D0 <= 32'habababab;
            D1 <= 32'haaaabbbb;
            D2 <= 32'hacacacac;
            D3 <= 32'haaaacccc;
            D4 <= 32'hbcbcbcbc;
            D5 <= 32'hbbbbcccc;
            D6 <= 32'hdcdcdcdc;
            D7 <= 32'hddddcccc;

        #10 SEL <= 3'b101;     // SEL D5
            D0 <= 32'habababab;
            D1 <= 32'haaaabbbb;
            D2 <= 32'hacacacac;
            D3 <= 32'haaaacccc;
            D4 <= 32'hbcbcbcbc;
            D5 <= 32'hbbbbcccc;
            D6 <= 32'hdcdcdcdc;
            D7 <= 32'hddddcccc;

        #10 SEL <= 3'b110;     // SEL D6
            D0 <= 32'habababab;
            D1 <= 32'haaaabbbb;
            D2 <= 32'hacacacac;
            D3 <= 32'haaaacccc;
            D4 <= 32'hbcbcbcbc;
            D5 <= 32'hbbbbcccc;
            D6 <= 32'hdcdcdcdc;
            D7 <= 32'hddddcccc;

        #10 SEL <= 3'b111;     // SEL D7
            D0 <= 32'habababab;
            D1 <= 32'haaaabbbb;
            D2 <= 32'hacacacac;
            D3 <= 32'haaaacccc;
            D4 <= 32'hbcbcbcbc;
            D5 <= 32'hbbbbcccc;
            D6 <= 32'hdcdcdcdc;
            D7 <= 32'hddddcccc;
        
        
    
        #10 $finish;

    end
endmodule
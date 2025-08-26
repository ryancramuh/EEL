`timescale 1ns/1ps

module tb_EXTENDER();

    logic [2:0] IMM_SEL;
    
    logic [31:0] IMM_IN;
    logic [24:0] IR;

    assign IR = IMM_IN[31:7];
    
    EXTENDER UUT(
        .IMM_SEL(IMM_SEL),
        .IR(IR),
        .IMM()
    );

    initial begin
        $dumpfile("tb_EXTENDER.vcd");
        $dumpvars(0, tb_EXTENDER);
    end

    initial begin
        IMM_SEL = 3'b000;
        IMM_IN = 32'b0;
    end

    always begin

        #10 IMM_SEL <= 3'b000; // I-TYPE
            IMM_IN <= 32'hdeadbeef;
        
        #10 IMM_SEL <= 3'b001; // S-TYPE
            IMM_IN <= 32'hdeadbeef;
        
        #10 IMM_SEL <= 3'b010; // B-TYPE
            IMM_IN <= 32'hdeadbeef;
        
        #10 IMM_SEL <= 3'b011; // U-TYPE
            IMM_IN <= 32'hdeadbeef;

        #10 IMM_SEL <= 3'b100; // J-TYPE
            IMM_IN <= 32'hdeadbeef;

        #10 IMM_SEL <= 3'b101; // Default (I-type)
            IMM_IN <= 32'hdeadbeef;


        #10 $finish;
    end

endmodule
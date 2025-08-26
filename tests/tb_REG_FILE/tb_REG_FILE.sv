`timescale 1ns/1ps

// module tb_REG_FILE
// author Ryan Cramer

module tb_REG_FILE();

    logic CLK;
    logic [4:0] ADDR1;
    logic [4:0] ADDR2;
    logic [4:0] W_ADDR;
    logic W_EN;
    logic [31:0] W_DATA;
    
    REG_FILE UUT(
        .CLK(CLK),
        .ADDR1(ADDR1),
        .ADDR2(ADDR2),
        .W_ADDR(W_ADDR),
        .W_EN(W_EN),
        .W_DATA(W_DATA),
        .RS1(),
        .RS2()
    );

    initial begin 
        $dumpfile("tb_REG_FILE.vcd");
        $dumpvars(0, tb_REG_FILE);
    end

    initial begin
        #5 CLK = 1'b0;
        forever #5 CLK = ~CLK;
    end

    always begin
        #10 ADDR1 <= 5'd0;
            ADDR2 <= 5'd1;
            W_ADDR <= 5'd1;
            W_EN <= 1'b0;
            W_DATA <= 32'hdeadbeef;

        #10 ADDR1 <= 5'd0;
            ADDR2 <= 5'd2;
            W_ADDR <= 5'd1;
            W_EN <= 1'b1;
            W_DATA <= 32'hdeadbeef;

        #10 ADDR1 <= 5'd0;
            ADDR2 <= 5'd1;
            W_ADDR <= 5'd1;
            W_EN <= 1'b1;
            W_DATA <= 32'hbeeffeed;

        #20 $finish;
    end

    

endmodule

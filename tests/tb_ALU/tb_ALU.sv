`timescale 1ns/1ps

// test: tb_ALU
// author: Ryan Cramer

module tb_ALU();

logic [31:0] OP_A;
logic [31:0] OP_B;
logic [3:0] ALU_FUN;

/* |------- ALU_FUN Table -------|
   |   FUN_NAME   |    ALU_FUN   |
   |_____________________________|
   |      ADD     |     4'b0000  |
   |      SUB     |     4'b1000  |
   |      OR      |     4'b0110  |
   |      AND     |     4'b0111  |
   |      XOR     |     4'b0100  |
   |      SRL     |     4'b0101  |
   |      SLL     |     4'b0001  |
   |      SRA     |     4'b1101  |
   |      SLT     |     4'b0010  |
   |      SLTU    |     4'b0011  |
   |      LUI     |     4'b1001  |
   |_____________________________| */
   


    ALU UUT(
        .OP_A(OP_A),
        .OP_B(OP_B),
        .ALU_FUN(ALU_FUN),
        .RESULT(),
        .ZERO()
    );

    initial begin
        $dumpfile("tb_ALU.vcd");
        $dumpvars(0, tb_ALU);
    end

    initial begin
        OP_A = 'b0;
        OP_B = 'b0;
    end

    

    always begin
        $monitorh("OP_A =", OP_A, "\tOP_B =", OP_B,
         "\tALU_FUN = ", ALU_FUN, "\n RESULT = ", UUT.RESULT, "\t ZERO = ", UUT.ZERO);
        #10 OP_A = 32'h0000_0000;
            OP_B = 32'h0000_0000;
            ALU_FUN = 4'b0000; // ADD
        

        #10 OP_A = 32'h1000_0000;
            OP_B = 32'h1000_0000;
            ALU_FUN = 4'b0000; // ADD
        

        #10 OP_A = 32'h1000_0000;
            OP_B = 32'h1000_0000;
            ALU_FUN = 4'b1000; // SUB
        
        #10 OP_A = 32'h1000_FFFF;
            OP_B = 32'h1000_0000;
            ALU_FUN = 4'b0110; // OR
        
        #10 OP_A = 32'h1000_FFFF;
            OP_B = 32'h1000_0000;
            ALU_FUN = 4'b0111; // AND

        #10 OP_A = 32'hF0F0_F0F0;
            OP_B = 32'hFFFF_FFFF;
            ALU_FUN = 4'b0100; // XOR

        #10 OP_A = 32'h0000_0004;
            OP_B = 32'h0000_0002;
            ALU_FUN = 4'b0101; // SRL

        #10 OP_A = 32'h0000_0004;
            OP_B = 32'h0000_0002;
            ALU_FUN = 4'b0001; // SLL
        
        #10 OP_A = 32'h0000_000f;
            OP_B = 32'h0000_0001;
            ALU_FUN = 4'b1101; // SRA
        
        #10 OP_A = 32'h8000_0001;
            OP_B = 32'h8000_0010;
            ALU_FUN = 4'b0010; // SLT
        
        #10 OP_A = 32'h0000_0011;
            OP_B = 32'h0000_0010;
            ALU_FUN = 4'b0010; // SLT
        
        #10 OP_A = 32'h0000_0001;
            OP_B = 32'h0000_0010;
            ALU_FUN = 4'b0011; // SLTU

        #10 OP_A = 32'h0000_0011;
            OP_B = 32'h0000_0010;
            ALU_FUN = 4'b0011; // SLTU
        
        #10 OP_A = 32'hFFFF_0000;
            OP_B = 32'h0000_FFFF;
            ALU_FUN = 4'b1001; // LUI
            
        #10 $finish;
    end

endmodule
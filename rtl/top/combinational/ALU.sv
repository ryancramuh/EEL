`timescale 1ns/1ps

// module: ALU
// author: Ryan Cramer
//
// supported operations:
// 4'b0000 = ADD
// 4'b1000 = SUB
// 4'b0110 = OR
// 4'b0111 = AND
// 4'b0100 = XOR
// 4'b0101 = SRL
// 4'b0001 = SLL
// 4'b1101 = SRA
// 4'b0010 = SLT
// 4'b0011 = SLTU
// 4'b1001 = LUI-Copy


module ALU #(parameter n = 32)
(
	input [n-1:0] OP_A,
	input [n-1:0] OP_B,
	input [3:0] ALU_FUN,
	output logic ZERO,
	output logic [n-1:0] RESULT	
);


	always_comb begin
		case(ALU_FUN)
			4'b0000: RESULT = OP_A + OP_B;
			4'b1000: RESULT = OP_A - OP_B;
			4'b0110: RESULT = OP_A | OP_B;
			4'b0111: RESULT = OP_A & OP_B;
			4'b0101: RESULT = OP_A >> OP_B;
			4'b0001: RESULT = OP_A << OP_B;
			4'b1101: RESULT = OP_A >>> OP_B;
			4'b0010: RESULT = {31'b0, ($signed(OP_A) < $signed(OP_B))};
			4'b0011: RESULT = {31'b0, ($unsigned(OP_A) < $unsigned(OP_B))};
			4'b1001: RESULT = OP_A;
			default: RESULT = 'b0;
		endcase
	end
	
	assign ZERO = (RESULT == 0);

endmodule	

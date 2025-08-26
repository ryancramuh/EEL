`timescale 1ns/1ps

// module: MUX 8 to 1
// author: Ryan Cramer

module MUX8T1 #(parameter n = 32)
(
	input [2:0] SEL,
	input [n-1:0] D0,
	input [n-1:0] D1,
	input [n-1:0] D2,
	input [n-1:0] D3,
	input [n-1:0] D4,
	input [n-1:0] D5,
	input [n-1:0] D6,
	input [n-1:0] D7,	
	output logic [n-1:0] DOUT
);

	always_comb begin
		case(SEL)
			3'b000: DOUT = D0;
			3'b001: DOUT = D1;
			3'b010: DOUT = D2;
			3'b011: DOUT = D3;
			3'b100: DOUT = D4;
			3'b101: DOUT = D5;
			3'b110: DOUT = D6;
			3'b111: DOUT = D7;
			default: DOUT = D0;
		endcase
	end

endmodule 

`timescale 1ns/1ps

// module: MUX 2 to 1
// author: Ryan Cramer

module MUX2T1 #(parameter n = 32)
(
	input SEL,
	input [n-1:0] D0,
	input [n-1:0] D1,
	output logic [n-1:0] DOUT
);
	
	always_comb begin
		case(SEL)
			1'b0: DOUT = D0;
			1'b1: DOUT = D1;
			default: DOUT = D0;
		endcase
	end

endmodule

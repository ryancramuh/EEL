`timescale 1ns/1ps

module MUX4T1 #(parameter n = 32)
(
	input [1:0] SEL,
	input [n-1:0] D0,
	input [n-1:0] D1,
	input [n-1:0] D2,
	input [n-1:0] D3,
	output logic [n-1:0] DOUT
);

	always_comb begin
		case(SEL)
			2'b00: DOUT = D0;
			2'b01: DOUT = D1;
			2'b10: DOUT = D2;
			2'b11: DOUT = D3;
			default: DOUT = D0;
		endcase
	end

endmodule

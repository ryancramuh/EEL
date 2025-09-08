`timescale 1ns/1ps

// module: IMEM 64kb
// author: Ryan Cramer

module IMEM #(parameter ADDR_DEPTH = 14)
(
    input RDEN,
    input [ADDR_DEPTH-1:0] ADDR,
    output logic [31:0] MEM_OUT
);

(* rom_style = "{distributed | block}" *)
(* rom_decomp = "power" *) logic [31:0] rom_64kb [0:2**ADDR_DEPTH-1];

initial begin
    $readmemh("eel_program.mem", rom_64kb);
end

always_comb begin
    if(RDEN) begin
        MEM_OUT = rom_64kb[ADDR];
    end
    else begin
        MEM_OUT = 'b0;
    end
end

endmodule
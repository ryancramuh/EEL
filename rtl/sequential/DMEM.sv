`timescale 1ns/1ps

// module: Data Memory 64kB
// author: Ryan Cramer

module DMEM #(parameter ADDR_DEPTH = 14, // 2^14 = 16384 ADDR_WIDTH addresses
              parameter DATA_MEM_BASE = 14'h6000,
              parameter ADDR_WIDTH = 32) // 32-bit ADDR_WIDTH
(
    input CLK,
    input RDEN,
    input WEN,
    input [1:0] BYTE_SEL,
    input SIGN,
    input [ADDR_DEPTH-1:0] ADDR,
    input [ADDR_WIDTH-1:0] DATA_IN,
    output logic [ADDR_WIDTH-1:0] DATA_OUT
);

    (* ram_style = "block" *) logic [ADDR_WIDTH-1:0] ram_64kb [0:2**ADDR_DEPTH-1];
    
    logic [ADDR_WIDTH-1:0] data_out;
    logic [ADDR_WIDTH-1:0] data_in;
    logic [ADDR_DEPTH-1:0] actual_addr;

    assign actual_addr = ADDR - DATA_MEM_BASE;

    always_comb begin // DATA_OUT BYTE CONVERSION
        case(BYTE_SEL)
            2'b00: begin // BYTE
                data_out = SIGN ? {{24{1'b1}}, ram_64kb[actual_addr][7:0]} : {{24{1'b0}}, ram_64kb[actual_addr][7:0]};
            end
            2'b01: begin // HALF
                data_out = SIGN ? {{16{1'b1}}, ram_64kb[actual_addr][15:0]} : {{16{1'b0}}, ram_64kb[actual_addr][15:0]};
            end
            2'b10: begin // WORD
                data_out = ram_64kb[actual_addr];
            end
            default: begin // default = WORD
                data_out = ram_64kb[actual_addr];
            end
        endcase
    end

    always_comb begin // DATA_IN BYTE CONVERSION
        case(BYTE_SEL)
            2'b00: begin // BYTE
                data_in = SIGN ? {{24{1'b1}}, DATA_IN[7:0]} : {{24{1'b0}}, DATA_IN[7:0]};
            end
            2'b01: begin // HALF
                data_in = SIGN ? {{16{1'b1}}, DATA_IN[15:0]} : {{16{1'b0}}, DATA_IN[15:0]};
            end
            2'b10: begin // WORD
                data_in = DATA_IN;
            end
            default: begin // default = WORD
                data_in = DATA_IN;
            end
        endcase
    end

    always@(posedge CLK) begin
        if(RDEN) begin
            DATA_OUT <= data_out;
        end
        else if (WEN) begin
            ram_64kb[actual_addr] <= data_in; 
            DATA_OUT <= 'b0;  
        end
        else 
            DATA_OUT <= 'b0;  
    end

endmodule
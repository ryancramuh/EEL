`timescale 1ns / 1ps

module EXTENDER(

    input logic [24:0] IR,
    input logic [2:0] IMM_SEL,
    output logic [31:0] IMM
    ); 

    logic [31:0] U_TYPE;
    logic [31:0] I_TYPE;
    logic [31:0] S_TYPE;
    logic [31:0] B_TYPE;
    logic [31:0] J_TYPE;

    assign I_TYPE = {{21{IR[24]}}, IR[23:18], IR[17:13]};
    assign S_TYPE = {{21{IR[24]}}, IR[23:18], IR[4:0]};
    assign B_TYPE = {{20{IR[24]}}, IR[0], IR[23:18], IR[4:1], 1'b0};
    assign U_TYPE = {IR[24:5], 12'b0};
    assign J_TYPE = {{12{IR[24]}}, IR[12:5], IR[13], IR[23:14], 1'b0};

    always_comb begin
        case(IMM_SEL)
            3'b000: begin
                IMM = I_TYPE;
            end
            3'b001: begin
                IMM = S_TYPE;
            end
            3'b010: begin
                IMM = B_TYPE;
            end
            3'b011: begin
                IMM = U_TYPE;
            end
            3'b100: begin
                IMM = J_TYPE;
            end
            default: begin
                IMM = I_TYPE;
            end
        endcase
    end
    
endmodule


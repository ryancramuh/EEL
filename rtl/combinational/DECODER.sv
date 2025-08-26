`timescale 1ns/1ps

// module: DECODER 
// author: Ryan Cramer

module DECODER(
	input [6:0] OPCODE,
	input [2:0] FUNC3,
	input FUNC7,
	output logic [1:0] RF_SEL,
	output logic SRC_A_SEL,
	output logic [1:0] SRC_B_SEL,
	output logic [3:0] ALU_FUN,
	output logic REG_WRITE,
	output logic MEM_WRITE,
	output logic MEM_READ,
	output logic [1:0] BYTE_SEL,
	output logic SIGN,
	output logic [2:0] IMM_SEL,
	output logic BRANCH,
	output logic [2:0] BR_TYPE,
	output logic JUMP,
	output logic [1:0] PC_SEL
);
	
	always_comb begin
			
			RF_SEL = 2'b00;
			SRC_A_SEL = 1'b0;
			SRC_B_SEL = 2'b00;
			ALU_FUN = 4'b0000;
			REG_WRITE = 1'b0;
			MEM_WRITE = 1'b0;
			MEM_READ = 1'b0;
			BYTE_SEL = 2'b00;
			SIGN = 1'b0;
			IMM_SEL = 3'b000;
			BRANCH = 1'b0;
			BR_TYPE = 3'b000;
			JUMP = 1'b0;

			case(OPCODE)
				
				7'b0110111: begin      // LUI
					SRC_A_SEL = 1'b1;  // u-type immediate
					RF_SEL = 2'b11;    // rd <- alu result
					IMM_SEL = 3'b011;  // u-type 
					ALU_FUN = 4'b1001; // lui-copy	
					REG_WRITE = 1'b1;  // write rd
				end
			
				7'b0010111: begin      // AUIPC
					SRC_A_SEL = 1'b1;  // u-type immediate
					SRC_B_SEL = 2'b10; // pc
					RF_SEL = 2'b11;    // rd <- alu result
					IMM_SEL = 3'b011;  // u-type
					ALU_FUN = 4'b0000; // add pc and u-type
				    REG_WRITE = 1'b1;  // write rd
				end
			
				7'b1101111: begin      // JAL
					JUMP = 1'b1;       // jump
					REG_WRITE = 1'b1;  // rd <- PC+4
					RF_SEL = 2'b00;    // PC+4 
					IMM_SEL = 3'b100;  // j-type 
					PC_SEL = 2'b01;    // jal to PC 
				end
				
				7'b1100111: begin      // JALR
					JUMP = 1'b1;       //jump
					REG_WRITE = 1'b1;  // rd <- PC+4
					RF_SEL = 2'b00;    // PC + 4
					IMM_SEL = 3'b100;  // j-type
					PC_SEL = 2'b10;    // jalr to PC
				end

				7'b0000011: begin      // LOAD
					REG_WRITE = 1'b1;  // rd <- M[rs1 + sext(imm)]
					MEM_READ = 1'b1;   // read from data memory
					SRC_A_SEL = 1'b0;  // rs1
					SRC_B_SEL = 2'b01; // imm 
					RF_SEL = 2'b10;    // Data Memory Output
					IMM_SEL = 3'b000;  // I-Type
					
					case(FUNC3)
					
							3'b000: begin // LB
								BYTE_SEL = 2'b00;
								SIGN = 1'b1;		
							end
							
							3'b001: begin // LH
								BYTE_SEL = 2'b01;
								SIGN = 1'b1;
							end
							
							3'b010: begin // LW
								BYTE_SEL = 2'b10;
								SIGN = 1'b1;
							end

							3'b011: begin // LBU
								BYTE_SEL = 2'b00;
								SIGN = 1'b0;
							end

							3'b100: begin //LHU
								BYTE_SEL = 2'b01;
								SIGN = 1'b0;
							end

							default: begin // default = LW
								BYTE_SEL = 2'b10;
								SIGN = 1'b1;
							end
					endcase

				end
			
				 7'b0010011: begin // I-Type ALU ops
					SRC_B_SEL   = 2'b01;
					RF_SEL     = 2'b11;
					REG_WRITE  = 1'b1;
					IMM_SEL    = 3'b000;
					case (FUNC3)
						3'b000: ALU_FUN = 4'b0000;  // ADDI
						3'b001: ALU_FUN = 4'b0001;  // SLLI
						3'b010: ALU_FUN = 4'b0010;  // SLTI
						3'b011: ALU_FUN = 4'b0011;  // SLTIU
						3'b100: ALU_FUN = 4'b0100;  // XORI
						3'b101: ALU_FUN = (FUNC7 == 1'b0) ? 4'b0101 : 4'b1101; // SRLI/SRAI
						3'b110: ALU_FUN = 4'b0110;  // ORI
						3'b111: ALU_FUN = 4'b0111;  // ANDI
						default: ;
					endcase
				end

				7'b1100011: begin // Branch (B-type)
					BRANCH     = 1'b1;
					IMM_SEL    = 3'b010;
					PC_SEL = 2'b01;
					
					case (FUNC3)
						3'b000: BR_TYPE = 3'b000; // BEQ
						3'b001: BR_TYPE = 3'b001; // BNE
						3'b100: BR_TYPE = 3'b010; // BLT
						3'b101: BR_TYPE = 3'b011; // BGE
						3'b110: BR_TYPE = 3'b100; // BLTU
						3'b111: BR_TYPE = 3'b101; // BGEU
						default: BR_TYPE = 3'b000;
					endcase
				end

				7'b0100011: begin // Store
					SRC_B_SEL = 2'b01;  // S-type (imm) offset
					MEM_WRITE  = 1'b1;   // Write Data Memory
					IMM_SEL    = 3'b001; // s-type

					case(FUNC3)
						
						3'b000: begin // SB
							BYTE_SEL = 2'b00;
						end
						
						3'b001: begin // SH
							BYTE_SEL = 2'b01;
						end
						
						3'b010: begin // SW
							BYTE_SEL = 2'b10;
						end

						default: begin
							BYTE_SEL = 2'b10; // SW
						end

					endcase
				end

				7'b0110011: begin // R-Type ALU ops
					ALU_FUN = {FUNC7, FUNC3};
					SRC_A_SEL = 1'b0;
					SRC_B_SEL = 2'b00;
					RF_SEL = 2'b11;
					REG_WRITE = 1'b1;
				end
			
			default: begin
					REG_WRITE = 1'b0;
					MEM_WRITE = 1'b0;
			end
			
		endcase
	end	
endmodule

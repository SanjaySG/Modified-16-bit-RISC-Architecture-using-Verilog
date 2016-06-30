`timescale 1ns / 1ps

module Control_Unit(
	input clk,
	input [3:0] opcode,
	input decodeComplete,
	input writeBackComplete,
	output reg readInstruction,
	output reg memRead,
	output reg memWrite,
	output reg writeBack,
	output reg aluMode,
	output reg [2:0] op,
	output reg execute,
	output reg resetInstructionMemory,
	output reg resetALU,
	output reg resetDataMemory,
	output reg jumpExecute
);

// your logic
	initial
		begin
			$display("Initial block of Control_Unit");
			readInstruction=1;
			memRead=0;
			memWrite=0;
			writeBack=0;
			aluMode=0;
			op=0;
			execute=0;
			resetInstructionMemory=0;
			jumpExecute=0;
		end
		
	always @(posedge decodeComplete)
		begin
			$display("Begin always block with opcode : %b",opcode);
			readInstruction=0;
			resetInstructionMemory=1;
			resetALU=0;
			resetDataMemory=0;
			case(opcode)
				0: begin
						$display("Opcode : 0000 - Load ");
						memRead=1;
						memWrite=0;
						writeBack=1;
						aluMode=0;
						execute=1;
						op=000;
					end
				1: begin
						$display("Opcode : 0001 - Store ");
						memRead=0;
						memWrite=1;
						writeBack=0;
						aluMode=0;
						execute=1;
						op=000;
				end
				2: begin
						$display("Opcode : 0002 - ALU Add ");
						memRead=0;
						memWrite=0;
						writeBack=1;
						aluMode=1;
						execute=1;
						op=000;
				end
				3: begin
						$display("Opcode : 0003 - ALU Subtract ");
						memRead=0;
						memWrite=0;
						writeBack=1;
						aluMode=1;
						execute=1;
						op=001;
				end
				4: begin
						$display("Opcode : 0004 - ALU Invert ");
						memRead=0;
						memWrite=0;
						writeBack=1;
						aluMode=1;
						execute=1;
						op=002;
				end
				5: begin
						$display("Opcode : 0005 - ALU Logical left shift ");
						memRead=0;
						memWrite=0;
						writeBack=1;
						aluMode=1;
						execute=1;
						op=003;
				end
				6: begin
						$display("Opcode : 0006 - ALU Logical right shift ");
						memRead=0;
						memWrite=0;
						writeBack=1;
						aluMode=1;
						execute=1;
						op=004;
				end
				7: begin
						$display("Opcode : 0007 - ALU Bitwise AND ");
						memRead=0;
						memWrite=0;
						writeBack=1;
						aluMode=1;
						execute=1;
						op=005;
				end
				8: begin
						$display("Opcode : 0008 - ALU Bitwise OR ");
						memRead=0;
						memWrite=0;
						writeBack=1;
						aluMode=1;
						execute=1;
						op=006;
				end
				9: begin
						$display("Opcode : 0009 - ALU Set on less than ");
						memRead=0;
						memWrite=0;
						writeBack=1;
						aluMode=1;
						execute=1;
						op=007;
				end
				10: begin
						$display("Opcode : 00010 - Branch On Equal ");
						memRead=0;
						memWrite=0;
						writeBack=0;
						aluMode=0;
						execute=1;
						op=001;
				end
				11: begin
						$display("Opcode : 00011 - Branch Not Equal ");
						memRead=0;
						memWrite=0;
						writeBack=0;
						aluMode=0;
						execute=1;
						op=002;
				end
				12: begin
						$display("Opcode : 00012 - Jump ");
						memRead=0;
						memWrite=0;
						writeBack=0;
						aluMode=0;
						execute=0;
						jumpExecute=1;						
				end
			endcase
		
		end

	always @(posedge writeBackComplete)
	begin
		readInstruction=1;
		memRead=0;
		memWrite=0;
		writeBack=0;
		aluMode=0;
		op=0;
		execute=0;
		resetInstructionMemory=0;
		resetALU=1;
		resetDataMemory=1;
		jumpExecute=0;
	end
	
endmodule

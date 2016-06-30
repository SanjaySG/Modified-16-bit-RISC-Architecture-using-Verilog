`timescale 1ns / 1ps
`include "Parameter.v"

module Instruction_Memory(
	input clk,
	input readInstruction,
	input resetInstructionMemory,
	input branchExecute,
	input [5:0] offset,
	input [11:0] offsetJump,
	input jumpExecute,
	output reg [`col - 1:0] pc_instr,
	output reg readInstructionComplete,
	output reg pcSetForBranch
);

reg [`col - 1:0] memory [`row_i - 1:0];
reg [15:0] pc;
reg [12:0] temp;
//reg [`col - 1:0] instr;
//reg instrRead;

	initial begin
		$readmemb("test\\test.prog", memory);
		$display("Initial block of instruction memory with memory : %b\n",memory);
		pc=0;
		pc_instr[`col - 1:0]=16'bXXXXXXXXXXXXXXXX;
		readInstructionComplete=0;
		pcSetForBranch=0;
		temp = 12'b000000000000;
	end


	always @(posedge readInstruction)
	begin 
		pcSetForBranch=0;
		if(memory[pc] !== 16'bXXXXXXXXXXXXXXXX) begin
			pc_instr=memory[pc];
			pc=pc+1;
			$display("-------------------------------------------------------------------------------------------------------------");
			$display("Instruction read from Instruction_memory is = %b",pc_instr);
			readInstructionComplete=1;
			end
		else begin
			$display("No more instructions to read. Clock %d=",$time);
			readInstructionComplete=0;
		end
	end
	
	always @(posedge resetInstructionMemory)
	begin
		readInstructionComplete=0;
	end
	
	always @(posedge branchExecute)
	begin
		pc = pc + offset;
		$display("PC updated to = %b",pc);
		pcSetForBranch=1;
	end
	
	always @(posedge jumpExecute)
	begin
		temp= offsetJump;
		pc=pc-1;
		pc[11:0]=temp;
		$display("PC updated to = %b",pc);
		pcSetForBranch=1;
	end
	
	//assign pc_instr=instr;
	//assign instructionRead = instrRead;
// your logic*/	

endmodule

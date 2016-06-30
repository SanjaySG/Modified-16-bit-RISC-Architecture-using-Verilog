`timescale 1ns / 1ps

// only clk is the input, no other signals can be there.
module Risc_16_bit(
	input clk
);
	wire readInstruction;
	wire memRead;
	wire memWrite;
	wire writeBack;
	wire aluMode;
	wire execute;
	wire [2:0] op;
	wire [3:0] opcode;
	wire decodeComplete;
	wire writeBackComplete;
	wire resetInstructionMemory;
	wire resetALU;
	wire resetDataMemory;
	wire jumpExecute;

	Datapath_Unit DU(
			clk,
			readInstruction,
			pc_instr,		// 16 bit instruction
			memRead,
			memWrite,
			writeBack,
			aluMode,
			execute,
			op,		
			readInstructionComplete,
			resetInstructionMemory,
			resetALU,
			memoryOperationComplete,
			resetDataMemory,
			pcSetForBranch,
			jumpExecute,
			opcode,					// 4 bit opcode
			rd1,
			rd2,
			offset,
			offsetJump,
			writeBackComplete,
			decodeComplete
	);

	Control_Unit CU(
			clk,
			opcode,
			decodeComplete,
			writeBackComplete,
			readInstruction,
			memRead,
			memWrite,
			writeBack,
			aluMode,
			op,
			execute,
			resetInstructionMemory,
			resetALU,
			resetDataMemory,
			jumpExecute
	);

	initial
		begin
			$display("Initial block of Risc_16_bit");
		end

endmodule

`timescale 1ns / 1ps

module ALU(
	input clk,
	input aluMode,
	input [15:0] rd1,
	input [15:0] rd2,
	input [5:0] offset,
	input execute,
	input [2:0] op,
	input resetALU,
	output reg [15:0] result,
	output reg executeComplete,
	output reg branchExecute
);

	initial begin
		$display("Initial block of ALU");	
		result = 16'b0;
		executeComplete=0;
		branchExecute=0;
	end
	
	always @(posedge execute)
	begin
		if(aluMode==0)
			begin
			if(op==000) begin
				$display("Load or Store task inside ALU");
				$display("aluMode : %b",aluMode);
				$display("Rd1 = %b",rd1);
				$display("Offset = %b",offset);
				result = rd1 + offset;
				$display("Result = %b",result);
				executeComplete=1;
			end 
			if(op==001) begin
				$display("Branch on Equal in ALU");
				$display("aluMode : %b",aluMode);
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				if(rd1==rd2) begin
					branchExecute=1;
					$display("Branch taken");
				end
				else begin
					executeComplete=1;
					$display("Branch Not taken");
				end
			end 
			if(op==002) begin
				$display("Branch on Not Equal in ALU");
				$display("aluMode : %b",aluMode);
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				if(rd1==rd2) begin
					executeComplete=1;
					$display("Branch Not taken");
				end
				else begin
					branchExecute=1;
					$display("Branch taken");
				end
			end 
		end
		else if(aluMode==1)
		begin
			if(op==000) begin
				$display("Add task inside ALU");
				$display("aluMode : %b",aluMode);
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				result = rd1 + rd2;
				$display("Sum = %b",result);
			end 
			else if (op==001) begin
				$display("Subtract task inside ALU");
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				result = rd1 - rd2;
				$display("Difference = %b",result);
			end
			else if (op==002) begin
				$display("Invert task inside ALU");
				$display("Rd1 = %b",rd1);
				result = ~ rd1;
				$display("Invert = %b",result);
			end
			else if (op==003) begin
				$display("Logical left shift task inside ALU");
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				result = rd1<<rd2;
				$display("Left shift = %b",result);
			end
			else if (op==004) begin
				$display("Logical right shift task inside ALU");
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				result = rd1>>rd2;
				$display("Right shift = %b",result);
			end
			else if (op==005) begin
				$display("Bitwise AND task inside ALU");
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				result = rd1&rd2;
				$display("Bitwise AND = %b",result);
			end
			else if (op==006) begin
				$display("Bitwise OR task inside ALU");
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				result = rd1 | rd2;
				$display("Bitwise OR = %b",result);
			end
			else if (op==007) begin
				$display("Set on less than task inside ALU");
				$display("Rd1 = %b",rd1);
				$display("Rd2 = %b",rd2);
				if(rd1<rd2) 
					result=1;
				else 
					result=0;
				$display("Set on less than = %b",result);
			end
			executeComplete=1;
		end
		
	end
	
	always @(posedge resetALU)
	begin
		executeComplete=0;
		branchExecute=0;
	end
// your logic

endmodule

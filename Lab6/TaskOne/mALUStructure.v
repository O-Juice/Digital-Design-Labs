`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:31:54 10/26/2017 
// Design Name: 
// Module Name:    mALUStructure 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mALUStructure(ins, A, B, S, OV, Cout);
	input [1:0] ins;
	input [2:0] A, B;
	output reg [2:0] S;
	output reg OV, Cout;
	reg [3:0] temp = 0;
	integer i;
	
	always @(ins, A, B)
		begin
			OV = 1'b0;
			Cout = 1'b0;
			
			case (ins)
				2'b00:
					begin             //Instruction A+B
						temp = A + B;
						Cout = temp[3];
						S = temp[2:0];
						OV = (A[2]==B[2])&(A[2]!=S[2]);
					end
				2'b01:
					begin             //Instruction for counting the number of bits with logic 1 in input A
						S = A[2] + A[1] + A[0];
					end
				2'b10:
					begin       //Instruction for A AND B
						S = A & B;
					end
				2'b11:
					begin             //Instruction for left rotation for input A  
						i = A[2];
						S = A << 1;
						S[0] = i;
					end
				endcase
		end
endmodule
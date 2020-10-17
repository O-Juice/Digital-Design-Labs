`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:48:40 10/26/2017
// Design Name:   mALUStructure
// Module Name:   /home/work/Documents/UC/Freshman/EECE2060C/Labs/Lab6/TaskOne/mALUTesting.v
// Project Name:  TaskOne
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mALUStructure
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mALUTesting;

	// Inputs
	reg [1:0] ins;
	reg [2:0] A;
	reg [2:0] B;

	// Outputs
	wire [2:0] S;
	wire OV;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	mALUStructure uut (
		.ins(ins), 
		.A(A), 
		.B(B), 
		.S(S), 
		.OV(OV), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		ins = 0;
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		ins[0]=0;
		ins[1]=0;
		A[0]=0;
		A[1]=1;
		A[2]=0;
		B[0]=1;
		B[1]=0;
		B[2]=0;
		
		#200;
		
		ins[0]=0;
		ins[1]=1;
		A[0]=0;
		A[1]=1;
		A[2]=1;
		B[0]=0;
		B[1]=1;
		B[2]=0;
		
		#300;
		
		ins[0]=1;
		ins[1]=0;
		A[0]=0;
		A[1]=0;
		A[2]=1;
		B[0]=0;
		B[1]=1;
		B[2]=0;
		
		#400;
		
		ins[0]=1;
		ins[1]=1;
		A[0]=0;
		A[1]=0;
		A[2]=1;
		B[0]=0;
		B[1]=1;
		B[2]=0;
	end
endmodule


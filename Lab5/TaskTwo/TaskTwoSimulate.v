`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:37:30 10/19/2017
// Design Name:   TaskTwo
// Module Name:   /home/work/Documents/UC/Freshman/EECE2060C/Labs/Lab5/TaskTwo/TaskTwoSimulate.v
// Project Name:  TaskTwo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TaskTwo
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TaskTwoSimulate;

	// Inputs
	reg A, B, C;

	// Outputs
	wire D, E;

	// Instantiate the Unit Under Test (UUT)
	TaskTwoSimulate uut (A, B, C, D, E);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;
		

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
                          A = 1;
		B = 0;
		C = 1;
		#200
		A = 0;
		B = 1;
		C = 0;
	   end
      
endmodule


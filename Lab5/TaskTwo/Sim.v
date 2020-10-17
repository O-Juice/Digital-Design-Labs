`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:48:03 10/19/2017
// Design Name:   Test
// Module Name:   /home/work/Documents/UC/Freshman/EECE2060C/Labs/Lab5/TaskTwo/Sim.v
// Project Name:  TaskTwo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Sim;

	// Inputs
	reg A, B, C;

	// Outputs
	wire D, E;

	// Instantiate the Unit Under Test (UUT)
	Test uut (A, B, C, D, E);

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
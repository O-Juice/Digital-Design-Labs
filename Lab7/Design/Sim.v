`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:26:23 11/05/2017
// Design Name:   Moore_sequential
// Module Name:   /home/work/Documents/UC/Freshman/EECE2060C/Labs/Lab7/Design/Sim.v
// Project Name:  Design
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Moore_sequential
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
	reg I;
	reg clock;
	reg reset;

	// Outputs
	wire Z;
	wire A;
	wire B;

	// Instantiate the Unit Under Test (UUT)
	Moore_sequential uut (
		.Z(Z), 
		.A(A), 
		.B(B), 
		.I(I), 
		.clock(clock), 
		.reset(reset)
		);
	
		// Initialize Inputs
		initial begin 
		   I = 0;
		   clock = 0;
		   reset = 1;
		   #2 reset = 0;
			#2 reset = 1;
		   
		repeat (22)
			#5 clock = ~ clock; //used to generate 15 clock cycles
		end
 
		// Add stimulus here
		initial begin
			#10 I = 1; //Change the input patterns to fully simulate your circuit
			#20 I = 0;
			#20 I = 1;
			#10 I = 0;
			#10 I = 1;
			#10 I = 0;
			#20 I = 1;
			#10 I = 0;
		end
endmodule


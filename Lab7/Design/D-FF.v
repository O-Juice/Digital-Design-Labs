`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:22:09 11/05/2017 
// Design Name: 
// Module Name:    D-FF 
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
module D-FF(Q, D, CLK, Clr);
	output Q;
	input D, CLK, Clr;
	reg Q;
	
	always @(posedge CLK, negedge Clr)
		if (~Clr) Q <= 1'b0; else Q <= D;
endmodule

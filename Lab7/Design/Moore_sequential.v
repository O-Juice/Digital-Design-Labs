`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:23:50 11/05/2017 
// Design Name: 
// Module Name:    Moore_sequential 
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
module Moore_sequential(output Z, A, B,
	input I, clock, reset
);
	wire Da, Db;
	
	assign Da = B&&(~I);
	assign Db = I;
	assign Z = A;
	
	D_FF m1(A, Da, clock, reset);
	D_FF m2(B, Db, clock, reset);
endmodule

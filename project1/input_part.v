`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:27:42 03/11/2016 
// Design Name: 
// Module Name:    input_part 
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
module input_part(
	input clk,
	input [3:0] partA,
	input [3:0] partB,
	input partC,
	output reg [3:0] unsorted_num0,
	output reg [3:0] unsorted_num1,
	output reg [3:0] unsorted_num2,
	output reg [3:0] unsorted_num3
	);
	
	always @(posedge clk)
	begin
	if(partC !=0)
	begin
	case(partA)
		4'b0001: begin
		unsorted_num0= partB;
		end
		4'b0010: begin
		unsorted_num1= partB;
		end
		4'b0100: begin
		unsorted_num2= partB;
		end
		4'b1000: begin
		unsorted_num3= partB;
		end
	endcase
	end 
	end
endmodule

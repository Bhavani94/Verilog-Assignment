`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:28:18 03/11/2016 
// Design Name: 
// Module Name:    sorting_part 
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
module sorting_part(
	input clk, 
	input partD, 
	input [3:0] unsorted_num0,
	input [3:0] unsorted_num1,
	input [3:0] unsorted_num2,
	input [3:0] unsorted_num3,
	output reg [3:0] sorted_num0,
	output reg [3:0] sorted_num1,
	output reg [3:0] sorted_num2,
   output reg [3:0] sorted_num3,
	output reg start_display
    );
	 reg [3:0] t;
	 reg [3:0] temp[3:0];
	 integer i;
	 integer j;
	 always@(posedge partD)
	 begin
	 temp[0]=unsorted_num0;
	 temp[1]=unsorted_num1;
	 temp[2]=unsorted_num2;
	 temp[3]=unsorted_num3;
	 if(partD !=0)
	 begin
	 for(i=1; i<4; i=i+1)
	 begin
	 t=temp[i];
		for(j=i-1;j>=0 && t<temp[j];j=j-1)
		begin
			temp[j+1]=temp[j];
			end
			temp[j+1] = t;
	end
	end
	sorted_num0=temp[0];
	sorted_num1=temp[1];
	sorted_num2=temp[2];
	sorted_num3=temp[3];
	start_display=1;
	end
endmodule

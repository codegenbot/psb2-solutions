/*
You will be given a number in decimal form and your task is to convert it to
binary format. The function should return a string, with each character representing a binary
number. Each character in the string will be '0' or '1'.

There will be an extra couple of characters "db" at the beginning and at the end of the string.
The extra characters are there to help with the format.

Examples:
decimal_to_binary(15)   // returns "db1111db"
decimal_to_binary(32)   // returns "db100000db"
*/
#include<stdio.h>
#include<string>
using namespace std;
string decimal_to_binary(int decimal){

  string output = "db";
  int quotient = decimal;
  int remainder;
  while(quotient != 0){
    remainder = quotient % 2;
    output += to_string(remainder);
    quotient = quotient / 2;
  }
  reverse(output.begin() + 2, output.end());
  output += "db";
  return output;
}

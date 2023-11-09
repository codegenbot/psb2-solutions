/*
Given a positive integer n, return the product of the odd digits.
Return 0 if all digits are even.
For example:
digits(1)  == 1
digits(4)  == 0
digits(235) == 15
*/
#include<stdio.h>
#include<string>
using namespace std;
int digits(int n){
	int product = 1;
	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 == 1) {
			product *= digit;
		}
		n /= 10;
	}
	return product;
}

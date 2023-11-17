/*
Complete the function that takes two integers and returns 
the product of their unit digits.
Assume the input is always valid.
Examples:
multiply(148, 412) should return 16.
multiply(19, 28) should return 72.
multiply(2020, 1851) should return 0.
multiply(14,-15) should return 20.
*/
#include<stdio.h>
#include<math.h>
using namespace std;
int multiply(int a,int b){
		int s=0;
	int i=0;
	while(a!=0)
	{
		s=s+a%10;
		a=a/10;
		i++;
		if(i==2)
		break;
	}
	i=0;
	while(b!=0)
	{
		s=s+b%10;
		b=b/10;
		i++;
		if(i==2)
		break;
	}
	return s;
}

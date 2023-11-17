/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
using namespace std;
vector<int> even_odd_count(int num){
#include<string>
#include<vector>
	vector<int> v;
	int even = 0;
	int odd = 0;
	while (num>0)
	{
		if (num % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		num /= 10;
	}
	v.push_back(even);
	v.push_back(odd);
	return v;
}
using namespace std;
vector<int> even_odd_count(int num){

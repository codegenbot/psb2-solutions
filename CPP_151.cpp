/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
long long double_the_difference(vector<float> lst){
	long long s=0;
	for(int i=0;i<lst.size();i++){
		if(lst[i]>0){
			if(lst[i]-int(lst[i])==0){
				if(lst[i]%2!=0){
					s+=pow(lst[i],2);
				}
			}
		}
	}
	return s;
}


//
#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst)
{
  long long odd_sum = 0;
  for (int i=0; i<lst.size(); i++)
  {
    if (lst[i] > 0)
    {
      if (lst[i] - (int)lst[i] == 0)
      {
        if (lst[i] % 2 != 0)
        {
          odd_sum += lst[i] * lst[i];
        }
      }
    }
  }
  return odd_sum;
}

int main()
{
    vector<float> lst = {1, 3, 2, 0};
    long long odd_sum = 10;
    assert (double_the_difference(lst) == odd_sum );
    return 0;
}

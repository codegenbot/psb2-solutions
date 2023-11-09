/*
Return median of elements in the vector l.
>>> median({3, 1, 2, 4, 5})
3
>>> median({-10, 4, 6, 1000, 10, 20})
15.0
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
float median(vector<float> l){
	sort(l.begin(), l.end());
	int size = l.size();
	if(size % 2 == 1){
		return l[size/2];
	}
	else{
		return (l[size/2] + l[size/2 - 1]) / 2;
	}
}

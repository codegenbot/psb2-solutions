/*
sum_to_n is a function that sums numbers from 1 to n.
>>> sum_to_n(30)
465
>>> sum_to_n(100)
5050
>>> sum_to_n(5)
15
>>> sum_to_n(10)
55
>>> sum_to_n(1)
1
*/
#include<stdio.h>
using namespace std;
int sum_to_n(int n){
	if(n==1)
		return 1;
	else
		return n+sum_to_n(n-1);
}

int main(){
	printf("%d\n",sum_to_n(30));
	printf("%d\n",sum_to_n(100));
	printf("%d\n",sum_to_n(5));
	printf("%d\n",sum_to_n(10));
	printf("%d\n",sum_to_n(1));
	return 0;
}

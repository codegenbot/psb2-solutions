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
if(n==0){
return 0;
}
else{
return n+sum_to_n(n-1);
}
}
int main(){
int n;
printf("Enter n:");
scanf("%d",&n);
printf("sum_to_n(%d)=%d\n",n,sum_to_n(n));
return 0;
}

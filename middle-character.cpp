#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
Ha
output:
Ha
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
*/
int main() {
	string a;
	cin>>a;
	int len=a.size();
	if(len%2==0){
		printf("%c",a[len/2]);
		printf("%c",a[len/2-1]);
	}else{
		printf("%c",a[len/2]);
	}
}

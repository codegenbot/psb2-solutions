/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,

compare_one(1, 2.5) ➞ 2.5
compare_one(1, "2,3") ➞ "2,3"
compare_one("5,1", "6") ➞ "6"
compare_one("1", 1) ➞ "None"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
	if(a.type()==b.type()){
		if(a==b){
			return "None";
		}
		else{
			return a>b?a:b;
		}
	}
	else{
		return a.type()==typeid(string)?a:b;
	}
}
int main(){
	printf("%s\n",boost::any_cast<const char*>(compare_one(1, 2.5)));
	printf("%s\n",boost::any_cast<const char*>(compare_one(1, "2,3")));
	printf("%s\n",boost::any_cast<const char*>(compare_one("5,1", "6")));
	printf("%s\n",boost::any_cast<const char*>(compare_one("1", 1)));
	return 0;
}

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
#include<string.h>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
  if(a.type()!=b.type()){
    return "None";
  }
  if(a.type()==typeid(float)){
    if(boost::any_cast<float>(a)>boost::any_cast<float>(b)){
      return a;
    }
    return b;
  }
  if(a.type()==typeid(int)){
    if(boost::any_cast<int>(a)>boost::any_cast<int>(b)){
      return a;
    }
    return b;
  }
  if(a.type()==typeid(string)){
    if(boost::any_cast<string>(a)>boost::any_cast<string>(b)){
      return a;
    }
    return b;
  }
  return "None";
}
int main(){
  float a=1;
  float b=2.5;
  float c=compare_one(a,b);
  printf("%f",c);
  return 0;
}

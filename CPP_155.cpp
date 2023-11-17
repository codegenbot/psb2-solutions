/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
vector<int> even_odd_count(int num){
    vector<int> result(2);
    while(num!=0){
        if((num%10)%2==0)
            result[0]++;
        else
            result[1]++;
        num=num/10;
    }
    return result;
}

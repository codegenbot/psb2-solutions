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
 
output:
 
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
string getMiddle(string input) {
    int l = input.length();
    if (l>=2) {
        if (l%2==0) {
            char c = input[l/2-1];
            char d = input[l/2];
            return string()+c+d;
        } else {
            if (l==1) {
                return input;
            } else {
                return string()+input[(l-1)/2];
            }
        }
    } else {
        return input;
    }
}
int main() {

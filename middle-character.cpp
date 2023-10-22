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
int main() {
    string s;
    while(cin >> s) {
        int len = s.length();
        if(len & 1) {
            cout << s[len/2] << endl;
        } else {
            cout << s[len/2-1] << s[len/2] << endl;
        }
    }
}

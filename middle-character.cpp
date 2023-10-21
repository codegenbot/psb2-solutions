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
QQ
input:
QQ 
output:
QQ
input:
$
output:
$$
input:
E9
output:
E9E9
input:
)b
output:
)b)b
*/
int main() {
    string s;
    while(cin >> s) {
        if(s.size() % 2 == 1) {
            cout << s[s.size() / 2] << endl;
        } else {
            cout << s[s.size() / 2 - 1] << s[s.size() / 2] << endl;
        }
    }
    return 0;
}

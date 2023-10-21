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
QQ
output:
QQ
input:
A
output:
A
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
    string input;
    while (getline(cin, input)) {
        int len = input.length();
        if (len == 0) {
            cout << endl;
            continue;
        }
        if (len == 1) {
            cout << input << endl;
        } else if (len % 2 == 0) {
            cout << input[len / 2 - 1] << input[len / 2] << endl;
        } else {
            cout << input[len / 2] << endl;
        }
    }
    return 0;
}

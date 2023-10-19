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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
*/
int main() {
    string s;
    cin >> s;
    stack<char> stk;
    for (char ch : s) {
        if (ch == '&' || ch == '|') {
            if (stk.size() > 1) {
                char tmp = stk.top();
                stk.pop();
                char tmp2 = stk.top();
                stk.pop();
                if (ch == '&') {
                    stk.push(tmp & tmp2);
                } else {
                    stk.push(tmp | tmp2);
                }
            }
            stk.push(ch);
        } else if (ch == 't') {
            stk.push(ch);
        } else if (ch == 'f') {
            stk.push(ch);
        }
    }
    if (stk.top() == 't') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    cout << stk.top() << endl;
    return 0;
}

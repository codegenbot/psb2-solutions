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
            stk.push(ch);
        } else if (ch == 't') {
            stk.push(ch);
        } else if (ch == 'f') {
            if (stk.empty()) {
                stk.push(ch);
            } else {
                char op = stk.top();
                stk.pop();
                char tmp = stk.top();
                stk.pop();
                if (op == '&') {
                    if (tmp == 'f' || ch == 'f') {
                        stk.push('f');
                    } else {
                        stk.push('t');
                    }
                } else {
                    if (tmp == 'f' && ch == 'f') {
                        stk.push('f');
                    } else {
                        stk.push('t');
                    }
                }
            }
        }
    }
    if (stk.top() == 't') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

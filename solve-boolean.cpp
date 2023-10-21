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
T
output:
True
input:
F
output:
False
input:
F&F
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

bool parseBoolExpr(string expression) {
    stack<char> stk;
    for(int i=0; i<expression.size(); i++){
        if(expression[i]!=')'){
            stk.push(expression[i]);
        }else{
            char c = stk.top();
            stk.pop();
            char op = stk.top();
            stk.pop();
            stk.pop();
            if(op=='&'){
                while(c!='('){
                    if(c=='f'){
                        stk.push('f');
                        break;
                    }
                    c = stk.top();
                    stk.pop();
                }
                if(c=='('){
                    stk.push('t');
                }
            }else if(op=='|'){
                while(c!='('){
                    if(c=='t'){
                        stk.push('t');
                        break;
                    }
                    c = stk.top();
                    stk.pop();
                }
                if(c=='('){
                    stk.push('f');
                }
            }else{
                while(c!='('){
                    if(c=='f'){
                        stk.push('t');
                        break;
                    }
                    c = stk.top();
                    stk.pop();
                }
                if(c=='('){
                    stk.push('f');
                }
            }
        }
    }
    return stk.top()=='t';
}

int main() {
    cout << parseBoolExpr("t");
    return 0;
}

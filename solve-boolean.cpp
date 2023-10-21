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
    string input;
    cin >> input;
    stack<char> st;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'T') {
            st.push('T');
        } else if (input[i] == 'F') {
            st.push('F');
        } else if (input[i] == '&') {
            char c1 = st.top();
            st.pop();
            char c2 = st.top();
            st.pop();
            if (c1 == 'F' || c2 == 'F') {
                st.push('F');
            } else {
                st.push('T');
            }
        } else if (input[i] == '|') {
            char c1 = st.top();
            st.pop();
            char c2 = st.top();
            st.pop();
            if (c1 == 'T' || c2 == 'T') {
                st.push('T');
            } else {
                st.push('F');
            }
        }
    }
    if (st.top() == 'T') {
        cout << "T" << endl;
    } else {
        cout << "F" << endl;
    }
    return 0;
}

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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
int main() {
    string str = "Wel come to Geeks for Geeks";
    int start = 0;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (i-start >= 5) {
                reverse(str.begin() + start, str.begin() + i);
            }
            start = i+1;
        }
    }
    if (str.size() - start >= 5) {
        reverse(str.begin() + start, str.end());
    }
    cout << str << endl;
    return 0;
}

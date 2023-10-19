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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1 0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
    string text, target;
    int i = 0;
    getline(cin, text);
    getline(cin, target);
    while (i < text.length()) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < target.length() && text[i+j] == target[j]) {
                j++;
            }
            if (j == target.length()) {
                cout << i << " ";
            }
        }
        i++;
    }
    cout << endl;
    return 0;
}

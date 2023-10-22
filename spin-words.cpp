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
    string s;
    getline(cin, s);
    int len = s.length();
    int i = 0;
    while (i < len) {
        int j = i;
        while (j < len && s[j] != ' ') {
            j++;
        }
        if (j - i >= 5) {
            int k = i;
            int l = j - 1;
            while (k < l) {
                swap(s[k], s[l]);
                k++;
                l--;
            }
        }
        i = j + 1;
    }
    cout << s << endl;
    return 0;
}

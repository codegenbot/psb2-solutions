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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string" -> "camelCaseExampleTestString"
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWord
input:
two words
output:
two words
input:
all separate words
output:
all separate words
input:
-dash-at-front
output:
DashAtFront
input:
dash-at-end-
output:
dashAtEnd
*/
int main() {
    string s;
    getline(cin, s);
    string result = "";
    bool flag = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == '-') {
            flag = false;
            if (s[i] == ' ')
                result += s[i];
        } else {
            if (flag == false) {
                if (s[i] >= 'a' && s[i] <= 'z')
                    result += toupper(s[i]);
                else
                    result += s[i];
                flag = true;
            } else {
                result += s[i];
            }
        }
    }
    cout << result << endl;
    return 0;
}

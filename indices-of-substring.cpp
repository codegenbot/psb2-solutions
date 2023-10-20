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
1
0
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
    string a, b;
    cin >> a >> b;
    vector<int> res;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[0]) {
            bool flag = true;
            for (int j = 1; j < b.size(); ++j) {
                if (a[i + j] != b[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) res.push_back(i);
        }
    }
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i];
        if (i != res.size() - 1) cout << " ";
    }
    cout << endl;
    return 0;
}

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
#include <algorithm>
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
120 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> res = {-1};
    while(true) {
        int n = text.size(), m = target.size();
        int i = res.back() + 1;
        for(; i + m <= n; i++) {
            if(text.substr(i, m) == target) break;
        }
        if(i + m > n) {
            break;
        } else {
            res.push_back(i);
        }
    } 
    res.erase(res.begin());
    cout << res.size() << endl;
    if(res.size()) {
        for(int i = 0; i < res.size(); i++) {
            if(i) cout << " ";
            cout << res[i];
        }
    } else {
        cout << endl;
    }
    cout << endl;
    return 0;
}

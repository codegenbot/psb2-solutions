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
#include <unordered_map>
#include <unordered_set>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
int main() {
    string s;
    while (cin >> s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'X') {
                res += 10;
                if (i + 2 < s.size()) {
                    if (s[i + 2] == 'X') {
                        res += 10;
                    } else if (s[i + 2] == '/') {
                        res += 10;
                    } else {
                        res += (s[i + 2] - '0');
                    }
                }
                if (i + 1 < s.size()) {
                    if (s[i + 1] == 'X') {
                        res += 10;
                    } else if (s[i + 1] == '/') {
                        res += 10 - (s[i] - '0');
                    } else {
                        res += (s[i + 1] - '0');
                    }
                }
            } else if (s[i] == '/') {
                res += 10 - (s[i - 1] - '0');
                if (i + 1 < s.size()) {
                    if (s[i + 1] == 'X') {
                        res += 10;
                    } else if (s[i + 1] == '/') {
                        res += 10;
                    } else {
                        res += (s[i + 1] - '0');
                    }
                }
            } else if (s[i] == '-') {
                
            } else {
                res += (s[i] - '0');
            }
        }
        cout << res << endl;
    }
}

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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

input:
2
2
129
output:
1
2
1
129

*/
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int ans = INT_MAX;
    int ans_idx;
    for (int i = 1; i < n; ++i) {
        if (abs(nums[i] - nums[i - 1]) < ans) {
            ans = abs(nums[i] - nums[i - 1]);
            ans_idx = i;
        }
    }
    for (int i = 0; i < ans_idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = ans_idx; i <= n; ++i) {
        cout << nums[i] << endl;
    }
}

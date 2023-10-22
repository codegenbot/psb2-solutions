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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2 1000 0 
output:
2
1000 0
input:
2 0 1000
output:
1
1000
*/
int main() {
    // read in size of input
    int n; cin >> n;
    // read in vector
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(nums[j] > max) {
                max = nums[j];
            }
        }
        if (max >= nums[i]) {
            cout << nums[i] << ' ';
        }
        max = INT_MIN;
    }
}

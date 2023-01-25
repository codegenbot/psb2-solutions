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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. For example, input: 1 0 output: 100 input: 1 10 output: 1100 input: 1 100 output: 11000 input: 1 1000 output: 110000 input: 1 10000 output: 1100000 input: 2 output: 1 input: 2 129 output: 1 129
*/
int main() {
    int n, m;
    while (cin >> n) {
        vector<int> nums;
        while (n) {
            nums.push_back(n % 10);
            n /= 10;
        }
        int len = nums.size();
        int left = 0, right = len - 1;
        while (left < right) {
            if (nums[left] == nums[right]) {
                left++;
                right--;
            } else if (nums[left] < nums[right]) {
                nums[left + 1] += nums[left];
                left++;
            } else {
                nums[right - 1] += nums[right];
                right--;
            }
        }
        for (int i = 0; i < len; i++) {
            cout << nums[i];
        }
        cout << endl;
    }
    return 0;
}

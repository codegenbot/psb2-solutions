#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

long long minSubArraySum(vector<long long> nums){
    long long currentSum = nums[0];
    long long minSum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentSum = min(nums[i], currentSum + nums[i]);
        minSum = min(minSum, currentSum);
    }
    
    return minSum;
}

int main() {
    assert (minSubArraySum({1, -1}) == -1);
    assert (minSubArraySum({-2, 1, -3, 4, -1, 2, 1, -5, 4}) == -5);
    assert (minSubArraySum({5, -3, 4, -1, 2, 1, -5, 4}) == -3);
    assert (minSubArraySum({-2, -3, 4, -1, -2, 1, 5, -3}) == -6);
    
    return 0;
}
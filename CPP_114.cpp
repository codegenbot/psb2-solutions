#include <limits>
long long minSubArraySum(vector<long long> nums){
    long long minSum = numeric_limits<long long>::max();
    long long currentSum = 0;
    
    for(int i = 0; i < nums.size(); i++){
        currentSum += nums[i];
        minSum = min(minSum, currentSum);
        if(currentSum > 0){
            currentSum = 0;
        }
    }
    
    return minSum;
}
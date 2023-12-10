```cpp
#include <climits>
#include <vector>
#include <iostream>
#include <tuple> 

std::tuple<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currDiff = abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    std::vector<int> left(nums.begin(), nums.begin() + idx);
    std::vector<int> right(nums.begin() + idx, nums.end());
    
    return std::make_tuple(left, right);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::tuple<std::vector<int>, std::vector<int>> result = cutVector(nums);
    
    for (int num : std::get<0>(result)) {
        std::cout << num << std::endl;
    }
    
    for (int num : std::get<1>(result)) {
        std::cout << num << std::endl;
    }
    
    return 0;
}
```
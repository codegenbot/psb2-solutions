#include <vector>
#include <iostream>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxRight = INT_MIN;
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::vector<int> leaders = findLeaders(nums);
    
    std::cout << leaders.size() << std::endl;
    for (int i = 0; i < leaders.size(); i++) {
        std::cout << leaders[i] << " ";
    }
    
    return 0;
}
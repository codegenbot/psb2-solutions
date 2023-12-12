#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int max = nums.back();
    leaders.push_back(max);

    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= max) {
            max = nums[i];
            leaders.push_back(max);
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

    std::vector<int> result = findLeaders(nums);

    std::cout << result.size() << std::endl;
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}
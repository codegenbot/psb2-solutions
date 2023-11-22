#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include <numeric>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = std::abs(nums[0] - nums[n - 1]);
    int index = 0;

    for (int i = 0; i < n - 1; i++) {
        int leftSum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = std::accumulate(nums.begin() + i, nums.end(), 0);

        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    std::vector<int> left(nums.begin(), nums.begin() + index);
    std::vector<int> right(nums.begin() + index, nums.end());
    return std::make_pair(left, right);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : result.second) {
        std::cout << num << " ";
    }

    return 0;
}
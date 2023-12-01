#include <iostream>
#include <vector>
#include <utility>
#include <limits>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    long long diff = std::numeric_limits<long long>::max();
    int index = 0;

    if (n == 1) {
        return std::make_pair(nums, std::vector<int>());
    }

    for (int i = 0; i <= n; i++) {
        long long leftSum = 0;
        long long rightSum = 0;

        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        for (int j = i+1; j < n; j++) {
            rightSum += nums[j];
        }

        long long currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index + 1);
    std::vector<int> rightSubvector(nums.begin() + index + 1, nums.end());

    if (index == n - 1) {
        leftSubvector = std::vector<int>();
        rightSubvector = nums;
    }

    return std::make_pair(leftSubvector, rightSubvector);
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
    std::cout << std::endl;

    return 0;
}
```cpp
#include <cstddef>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    size_t n = nums.size();
    int leftSum = nums[0], rightSum = 0;

    if (n == 1) {
        return std::make_pair(nums, nums);
    }

    for (size_t i = 1; i < n; i++) {
        rightSum += nums[i];
    }

    int minDiff = std::abs(leftSum - rightSum);
    size_t cutIndex = 0;

    for (size_t i = 1; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }

    std::vector<int> left(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> right(nums.begin() + cutIndex, nums.begin() + n);

    return std::make_pair(left, right);
}
```
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& nums) {
    if (nums.empty()) {
        return nums;
    }
    std::vector<std::pair<int, int>> sums;
    for (const int& num : nums) {
        int sum = 0;
        int abs_num = std::abs(num);
        while (abs_num > 0) {
            sum += abs_num % 10;
            abs_num /= 10;
        }
        sums.push_back(std::make_pair(sum, num));
    }
    std::sort(sums.begin(), sums.end());
    std::vector<int> result;
    for (const auto& pair : sums) {
        result.push_back(pair.second);
    }
    return result;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

float findMaxElement(const std::vector<float>& l) {
    auto max = *std::max_element(l.begin(), l.end());
    return max;
}

int main() {
    std::vector<float> nums = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    assert (std::abs(*std::max_element(nums.begin(), nums.end()) - 124) < 1e-4);
    std::cout << "Test passed!" << std::endl;
    return 0;
}
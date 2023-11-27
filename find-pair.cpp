#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hashMap;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hashMap.find(complement) != hashMap.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
        hashMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int target;
    std::cin >> target;

    std::vector<int> result = findPair(nums, target);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}
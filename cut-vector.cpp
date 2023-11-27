#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    int diff = numeric_limits<int>::max(), cutIndex = -1;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int currentDiff = abs(*max_element(nums.begin(), nums.begin() + i + 1) - *min_element(nums.begin() + i + 1, nums.end()));
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    return make_pair(leftSubvector, rightSubvector);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    auto result = cutVector(nums);
    auto& leftResult = result.first;
    auto& rightResult = result.second;

    for (const auto& element : leftResult) {
        cout << element << " ";
    }

    cout << endl;

    for (const auto& element : rightResult) {
        cout << element << " ";
    }

    return 0;
}
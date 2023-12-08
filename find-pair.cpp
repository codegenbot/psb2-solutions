```
c#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_set<int> seen;

    for (int num : nums) {
        int complement = target - num;
        if (seen.find(complement) != seen.end()) {
            result.push_back(num);
            result.push_back(complement);
            break;
        }
        seen.insert(num);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<int> pair = findPair(nums, target);

    for (int num : pair) {
        cout << num << endl;
    }

    return 0;
}
```
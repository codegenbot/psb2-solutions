#include <vector>
using namespace std;
int find_pair(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return i, j;
            }
        }
    }
    return -1, -1;
}
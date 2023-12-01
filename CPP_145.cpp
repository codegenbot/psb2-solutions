#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> order_by_points(vector<int> nums){
    sort(nums.begin(), nums.end(), [](int a, int b){
        int sum_a = 0, sum_b = 0;
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        while (a > 0) {
            sum_a += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sum_b += b % 10;
            b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
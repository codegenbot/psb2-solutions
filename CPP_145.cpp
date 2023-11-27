#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

using std::vector;

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    while (a != 0) {
        sumA += abs(a % 10);
        a /= 10;
    }
    while (b != 0) {
        sumB += abs(b % 10);
        b /= 10;
    }
    if (sumA == sumB) {
        return false;
    }
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums);

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}

vector<int> order_by_points(vector<int> nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}
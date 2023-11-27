#include <vector>
#include <algorithm>

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

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}
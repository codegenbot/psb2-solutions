#include <vector>
#include <algorithm>
#include <cstdlib>

bool compare(int a, int b) {
    int sum_a = 0, sum_b = 0;
    int temp_a = abs(a), temp_b = abs(b);

    while (temp_a > 0) {
        sum_a += temp_a % 10;
        temp_a /= 10;
    }

    while (temp_b > 0) {
        sum_b += temp_b % 10;
        temp_b /= 10;
    }

    if (sum_a == sum_b) {
        return a < b;
    }

    return sum_a < sum_b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}

bool issame(std::vector<int> a, std::vector<int> b) {
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

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}
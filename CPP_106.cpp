#include <vector>
#include <cassert>
#include <iostream>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
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

std::vector<int> f(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            result.push_back(factorial);
        }
        else {
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    assert(isSame(f(3), {1, 2, 6}));
    return 0;
}
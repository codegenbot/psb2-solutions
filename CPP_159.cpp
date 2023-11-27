#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = remaining - eaten;
    return std::vector<int>{total, left};
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(eat(4, 5, 1), std::vector<int>{5, 0}));
    return 0;
}
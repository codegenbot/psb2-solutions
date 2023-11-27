#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int>& array) {
    std::vector<int> sorted_array = array;
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        std::sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}

bool issame(std::vector<int>& a, std::vector<int>& b) {
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
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}
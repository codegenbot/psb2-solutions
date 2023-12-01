#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

std::vector<int> largest_smallest_integers(const std::vector<int>& lst) {
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && lst[i] > largest_negative) {
            largest_negative = lst[i];
        }
        if (lst[i] > 0 && lst[i] < smallest_positive) {
            smallest_positive = lst[i];
        }
    }

    return { largest_negative, smallest_positive };
}

int main() {
    bool issameResult = issame(largest_smallest_integers({ -6, -4, -4, -3, -100, 1 }), std::vector<int>{ -100, 1 });
    assert(issameResult == true);

    issameResult = issame(largest_smallest_integers({ 5, 3, -1, 7, 2 }), std::vector<int>{ -1, 2 });
    assert(issameResult == true);

    issameResult = issame(largest_smallest_integers({ 0, 0, 0, 0, 0 }), std::vector<int>{ 0, 0 });
    assert(issameResult == true);

    issameResult = issame(largest_smallest_integers({ -1, -2, -3, -4, -5 }), std::vector<int>{ -1, -5 });
    assert(issameResult == true);

    issameResult = issame(largest_smallest_integers({ 1, 2, 3, 4, 5 }), std::vector<int>{ 5, 1 });
    assert(issameResult == true);

    return 0;
}
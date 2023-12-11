```
#include <memory_resource>
#include <cassert>

bool issame(const std::pmr::vector<int>& a, const std::pmr::vector<int>& b) {
    return a == b;
}

std::pmr::vector<int> pluck(const std::pmr::vector<int>& arr) {
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    return {smallestEven, smallestIndex};
}

int main() {
    std::pmr::vector<int> a = {7, 9, 7, 1};
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}
```
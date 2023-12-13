```cpp
#include <vector>
#include <cassert>

std::vector<int> filter_integers(const std::vector<int>& input) {
    std::vector<int> filtered;
    for (int num : input) {
        if (num >= '0' && num <= '9') {
            filtered.push_back(num);
        }
    }
    return filtered;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
```
```cpp
#include <cassert>
#include <vector>
#include <list>
#include <typeindex>

std::vector<int> filter_integers(std::initializer_list<std::any> values) {
    std::vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
   return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));

    return 0;
}
```
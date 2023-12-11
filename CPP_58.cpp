```cpp
#include <algorithm>
#include <vector>
#include <memory_resource>
#include <initializer_list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<int> common{4, 3, 2, 8};
    assert(issame(common, {}));
    return 0;
}
```
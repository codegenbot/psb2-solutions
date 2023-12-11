
#include <iostream>
#include <vector>
#include <memory_resource>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::array<int, 4> common({4, 3, 2, 8});
    assert(issame(common, {}));
    return 0;
}
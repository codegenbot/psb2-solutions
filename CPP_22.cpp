#include <vector>
#include <list>
#include <typeinfo>
#include <cassert>

std::vector<int> filter_integers(std::list<int> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        result.push_back(value);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
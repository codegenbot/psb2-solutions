#include <vector>
#include <cassert>

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
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
    // Test cases
    assert(issame(derivative({1}), {}));
    assert(issame(derivative({1, 2}), {2}));
    assert(issame(derivative({1, 2, 3}), {2, 6}));
    assert(issame(derivative({1, 2, 3, 4}), {2, 6, 12}));
    assert(issame(derivative({1, 2, 3, 4, 5}), {2, 6, 12, 20}));
    assert(issame(derivative({1, 2, 3, 4, 5, 6}), {2, 6, 12, 20, 30}));
    
    return 0;
}
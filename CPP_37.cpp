#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> l_prime = l;
    std::vector<float> even_indices;

    for(int i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }

    std::sort(even_indices.begin(), even_indices.end());

    for(int i = 0, j = 0; i < l.size(); i += 2, j++) {
        l_prime[i] = even_indices[j];
    }

    return l_prime;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}
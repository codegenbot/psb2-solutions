#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <numeric>

float findMaxElement(const std::vector<float>& l) {
    auto max = *std::max_element(l.begin(), l.end());
    return max;
}

int main() {
    assert(abs(std::max_element(l.begin(), l.end()) - 124) < 1e-4);
    return 0;
}
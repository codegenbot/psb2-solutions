#include <vector>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers);

bool areEqual(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(areEqual(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));

    return 0;
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> rollingMax;
    int maxSoFar = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > maxSoFar) {
            maxSoFar = numbers[i];
        }
        rollingMax.push_back(maxSoFar);
    }
    return rollingMax;
}
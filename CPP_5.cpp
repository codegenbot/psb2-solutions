#include <vector>
#include <cassert>

bool issame(const std::vector<int>& numbers, int delimiter) {
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == delimiter) {
            return true;
        }
    }
    return false;
}

std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter) {
    std::vector<int> result;
    if (numbers.empty()) {
        return result;
    }
    result.push_back(numbers[0]);
    for (int i = 1; i < numbers.size(); i++) {
        if (!issame(result, delimiter)) {
            result.push_back(delimiter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}
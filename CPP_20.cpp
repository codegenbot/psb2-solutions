#include <vector>
#include <cassert>
#include <cmath>

bool is_same_vector(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-4)
            return false;
    }
    return true;
}

std::vector<float> find_closest_elements(const std::vector<float>& numbers) {
    const float min_diff = std::abs(numbers[0] - numbers[1]);
    const float num1 = numbers[0];
    const float num2 = numbers[1];

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }

    std::vector<float> result;
    result.push_back(num1);
    result.push_back(num2);

    return result;
}

int main() {
    assert(is_same_vector(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}
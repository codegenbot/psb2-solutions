#include <vector> 

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    std::vector<float> result;
    float min_val = numbers[0];
    float max_val = numbers[0];

    // Find the minimum and maximum values in the input vector
    for (float number : numbers) {
        if (number < min_val) {
            min_val = number;
        }
        if (number > max_val) {
            max_val = number;
        }
    }

    // Rescale each number in the input vector to the unit range [0, 1]
    for (float number : numbers) {
        float rescaled_num = (number - min_val) / (max_val - min_val);
        result.push_back(rescaled_num);
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
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}
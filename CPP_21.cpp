#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
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

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = numbers[0];
    float max_val = numbers[0];

    // Find the minimum and maximum values in the vector
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < min_val) {
            min_val = numbers[i];
        }
        if (numbers[i] > max_val) {
            max_val = numbers[i];
        }
    }

    // Apply linear transformation to each element in the vector
    for (int i = 0; i < numbers.size(); i++) {
        numbers[i] = (numbers[i] - min_val) / (max_val - min_val);
    }

    return numbers;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));

    return 0;
}
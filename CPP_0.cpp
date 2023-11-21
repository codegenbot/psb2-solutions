#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}
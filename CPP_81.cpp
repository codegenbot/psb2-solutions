#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> result;
    for (const auto& grade : grades) {
        if (grade >= 90) {
            result.push_back("A");
        } else if (grade >= 80) {
            result.push_back("B");
        } else if (grade >= 70) {
            result.push_back("C");
        } else if (grade >= 60) {
            result.push_back("D");
        } else {
            result.push_back("F");
        }
    }
    return result;
}

int main() {
    std::vector<float> grades = {95, 87, 76};
    std::vector<std::string> expected_output = {"A", "B", "C"};
    std::vector<std::string> actual_output = numerical_letter_grade(grades);
    assert(std::equal(expected_output.begin(), expected_output.end(), actual_output.begin()));
    return 0;
}
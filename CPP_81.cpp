#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (size_t i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float gpa : grades) {
        if (gpa >= 4.0) {
            letter_grades.push_back("A+");
        } else if (gpa > 3.7) {
            letter_grades.push_back("A");
        } else if (gpa > 3.3) {
            letter_grades.push_back("A-");
        } else if (gpa > 3.0) {
            letter_grades.push_back("B+");
        } else if (gpa > 2.7) {
            letter_grades.push_back("B");
        } else if (gpa > 2.3) {
            letter_grades.push_back("B-");
        } else if (gpa > 2.0) {
            letter_grades.push_back("C+");
        } else if (gpa > 1.7) {
            letter_grades.push_back("C");
        } else if (gpa > 1.3) {
            letter_grades.push_back("C-");
        } else if (gpa > 1.0) {
            letter_grades.push_back("D+");
        } else if (gpa > 0.7) {
            letter_grades.push_back("D");
        } else if (gpa > 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}
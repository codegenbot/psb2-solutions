#include <vector>
#include <string>

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 4.0) {
            letter_grades.push_back("A+");
        } else if (grades[i] > 3.7) {
            letter_grades.push_back("A");
        } else if (grades[i] > 3.3) {
            letter_grades.push_back("A-");
        } else if (grades[i] > 3.0) {
            letter_grades.push_back("B+");
        } else if (grades[i] > 2.7) {
            letter_grades.push_back("B");
        } else if (grades[i] > 2.3) {
            letter_grades.push_back("B-");
        } else if (grades[i] > 2.0) {
            letter_grades.push_back("C+");
        } else if (grades[i] > 1.7) {
            letter_grades.push_back("C");
        } else if (grades[i] > 1.3) {
            letter_grades.push_back("C-");
        } else if (grades[i] > 1.0) {
            letter_grades.push_back("D+");
        } else if (grades[i] > 0.7) {
            letter_grades.push_back("D");
        } else if (grades[i] > 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b) {
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
    // Test the numerical_letter_grade() function
    vector<float> grades = {3.5, 4.2, 2.8, 3.9};
    vector<string> result = numerical_letter_grade(grades);
    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    // Test the issame() function
    vector<string> a = {"A", "B", "C"};
    vector<string> b = {"A", "B", "C"};
    cout << issame(a, b) << endl;

    return 0;
}
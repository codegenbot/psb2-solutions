vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letterGrades;
    for (float gpa : grades) {
        if (gpa == 4.0)
            letterGrades.push_back("A+");
        else if (gpa > 3.7)
            letterGrades.push_back("A");
        else if (gpa > 3.3)
            letterGrades.push_back("A-");
        else if (gpa > 3.0)
            letterGrades.push_back("B+");
        else if (gpa > 2.7)
            letterGrades.push_back("B");
        else if (gpa > 2.3)
            letterGrades.push_back("B-");
        else if (gpa > 2.0)
            letterGrades.push_back("C+");
        else if (gpa > 1.7)
            letterGrades.push_back("C");
        else if (gpa > 1.3)
            letterGrades.push_back("C-");
        else if (gpa > 1.0)
            letterGrades.push_back("D+");
        else if (gpa > 0.7)
            letterGrades.push_back("D");
        else if (gpa > 0.0)
            letterGrades.push_back("D-");
        else
            letterGrades.push_back("E");
    }
    return letterGrades;
}
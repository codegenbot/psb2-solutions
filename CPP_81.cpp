#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(int i=0; i<grades.size(); i++){
        if(grades[i] == 4.0)
            letter_grades.push_back("A+");
        else if(grades[i] > 3.7)
            letter_grades.push_back("A");
        else if(grades[i] > 3.3)
            letter_grades.push_back("A-");
        else if(grades[i] > 3.0)
            letter_grades.push_back("B+");
        else if(grades[i] > 2.7)
            letter_grades.push_back("B");
        else if(grades[i] > 2.3)
            letter_grades.push_back("B-");
        else if(grades[i] > 2.0)
            letter_grades.push_back("C+");
        else if(grades[i] > 1.7)
            letter_grades.push_back("C");
        else if(grades[i] > 1.3)
            letter_grades.push_back("C-");
        else if(grades[i] > 1.0)
            letter_grades.push_back("D+");
        else if(grades[i] > 0.7)
            letter_grades.push_back("D");
        else if(grades[i] > 0.0)
            letter_grades.push_back("D-");
        else
            letter_grades.push_back("E");
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    assert(issame(numerical_letter_grade({2.3, 1.7, 3.5}), {"B-", "C", "A-"}));
    assert(issame(numerical_letter_grade({4.0, 3.8, 2.9, 0.5}), {"A+", "A", "C+", "E"}));
    return 0;
}
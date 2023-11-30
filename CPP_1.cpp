#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == ' ') {
            continue;
        } else if (c == '(') {
            if (!current_group.empty()) {
                result.push_back(current_group);
                current_group.clear();
            }
        } else if (c == ')') {
            if (!current_group.empty()) {
                current_group.push_back(c);
                result.push_back(current_group);
                current_group.clear();
            }
        } else {
            current_group.push_back(c);
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}

int main() {
    string input;
    cout << "Enter the string containing multiple groups of nested parentheses: ";
    getline(cin, input);

    vector<string> groups = separate_paren_groups(input);

    cout << "Separated groups: ";
    for (const string& group : groups) {
        cout << group << " ";
    }
    cout << endl;

    return 0;
}
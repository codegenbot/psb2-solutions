#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(group + c);
                group = "";
            } else {
                group += c;
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter the string containing multiple groups of nested parentheses: ";
    getline(cin, input);

    vector<string> groups = separate_paren_groups(input);

    cout << "Separated groups: ";
    for (string group : groups) {
        cout << group << " ";
    }
    cout << endl;

    return 0;
}
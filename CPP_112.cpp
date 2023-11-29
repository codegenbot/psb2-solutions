#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string newString;
    bool isPalindrome = true;

    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            newString += s[i];
        }
    }

    // Check if the result string is palindrome
    for (int i = 0; i < newString.length() / 2; i++) {
        if (newString[i] != newString[newString.length() - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    result.push_back(newString);
    result.push_back(isPalindrome ? "True" : "False");

    return result;
}

bool issame(vector<string>& a, vector<string>& b) {
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
    vector<string> expected = {"", "True"};
    vector<string> output = reverse_delete("mamma", "mia");

    // Compare the output with the expected result
    if (issame(output, expected)) {
        cout << "Test case passed!" << endl;
    } else {
        cout << "Test case failed!" << endl;
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

bool is_happy(string s) {
    if (s.length() <= 1) {
        return false;
    }
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    getline(cin, input);
    if (is_happy(input)) {
        cout << "Happy" << endl;
    } else {
        cout << "Not Happy" << endl;
    }
    return 0;
}
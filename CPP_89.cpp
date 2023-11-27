#include <string>

string encrypt(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char encryptedChar = (s[i] - 'a' + 2 * 2) % 26 + 'a';
            result += encryptedChar;
        } else {
            result += s[i];
        }
    }
    return result;
}
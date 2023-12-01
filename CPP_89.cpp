#include <string>
#include <cassert>

std::string encrypt(std::string s) {
    std::string encrypted = "";
    int shift = 2 * 2;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + shift) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + shift) % 26;
        }
        encrypted += c;
    }

    return encrypted;
}

int main() {
    assert (encrypt("a")=="e"); // Sample assertion to test the encrypt function
    // Add more test cases here
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

std::string remove_vowels(std::string text);

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    return result;
}
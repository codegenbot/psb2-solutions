#include <iostream>
#include <string>
#include <algorithm>

std::string remove_vowels(std::string text) {
    std::string result;
    for (char c : text) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    return result;
}
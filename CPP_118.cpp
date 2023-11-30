#include <iostream>
#include <string>
#include <algorithm>

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    int n = word.length();
    
    for (int i = n - 2; i > 0; i--) {
        if (vowels.find(word[i]) != std::string::npos && !std::isalpha(word[i + 1]) && std::isalpha(word[i - 1])) {
            return std::string(1, word[i]);
        }
    }
    
    return "";
}
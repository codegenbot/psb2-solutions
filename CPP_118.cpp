#include <string>

std::string get_closest_vowel(const std::string& word) {
    int len = word.length();
    for (int i = len - 1; i >= 0; i--) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            return std::string(1, word[i]);
        }
    }
    return "";
}
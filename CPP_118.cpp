#include <iostream>
#include <string>
#include <cassert>

std::string get_closest_vowel(std::string word) {
    int n = word.length();
    for (int i = n - 2; i >= 1; i--) {
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u') {
            if (word[i - 1] == 'a' || word[i - 1] == 'e' || word[i - 1] == 'i' || word[i - 1] == 'o' || word[i - 1] == 'u') {
                if (word[i + 1] == 'a' || word[i + 1] == 'e' || word[i + 1] == 'i' || word[i + 1] == 'o' || word[i + 1] == 'u') {
                    return std::string(1, word[i]);
                }
            }
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == 'o');
    assert(get_closest_vowel("Hello") == 'e');
    assert(get_closest_vowel("World") == 'o');
    assert(get_closest_vowel("Code") == "");
    std::cout << "All test cases passed!\n";
    return 0;
}
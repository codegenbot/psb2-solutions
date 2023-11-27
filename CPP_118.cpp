#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }
    return false;
}

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.length();
    int i = n - 2;
    while (i > 0) {
        if (vowels.find(word[i]) != string::npos && !isVowel(word[i-1]) && !isVowel(word[i+1])) {
            return string(1, word[i]);
        }
        i--;
    }
    return "";
}

int main() {
    assert (get_closest_vowel("Above") == "o");
    // Additional test cases...
    
    return 0;
}
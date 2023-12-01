#include <iostream>
#include <vector>
#include <cassert>

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            if(count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        }
        else {
            word += s[i];
            if(isalpha(s[i]) && !isVowel(s[i])) {
                count++;
            }
        }
    }
    if(count == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}
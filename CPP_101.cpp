#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> words_string(string s) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',' || s[i] == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}
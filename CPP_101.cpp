#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> words_string(const string& s);

bool is_equal(const vector<string>& a, const vector<string>& b);

int main() {
    assert(is_equal(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));

    // Add more test cases if needed

    return 0;
}

vector<string> words_string(const string& s) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        }
        else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

bool is_equal(const vector<string>& a, const vector<string>& b) {
    bool result = true;
    if (a.size() != b.size()) {
        result = false;
    }
    else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                result = false;
                break;
            }
        }
    }
    return result;
}
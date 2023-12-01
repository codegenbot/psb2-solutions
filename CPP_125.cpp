#include <string>
#include <vector>

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (char c : txt) {
        if (c == ' ') {
            hasWhitespace = true;
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            hasComma = true;
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (word != "") {
        result.push_back(word);
    }

    if (result.empty()) {
        result.push_back(to_string(3));
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // Your implementation of issame function here
}

int main() {
    // Your existing code here
    return 0;
}
#include <string>
#include <vector>

using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.empty()) {
        result.push_back(to_string(3));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> a = {"hello", "world"};
    vector<string> b = {"hello", "world"};
    vector<string> c = {"hello", "cpp"};
    
    bool ab = issame(a, b);
    bool ac = issame(a, c);
    
    return 0;
}
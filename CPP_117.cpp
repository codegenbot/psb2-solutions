#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            int consonantCount = 0;
            for (char ch : word) {
                if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
                    ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    
    int consonantCount = 0;
    for (char ch : word) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            consonantCount++;
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    string s;
    int n;
    cin >> s >> n;
    
    vector<string> result = select_words(s, n);
    
    vector<string> expected_result;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        string word;
        cin >> word;
        expected_result.push_back(word);
    }
    
    assert(areSame(result, expected_result));
    
    return 0;
}
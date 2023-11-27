#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c);
bool issame(vector<string> a, vector<string> b);

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    return 0;
}

vector<string> reverse_delete(string s, string c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    bool is_palindrome = (result == reversed_result);
    vector<string> output;
    output.push_back(result);
    output.push_back(is_palindrome ? "True" : "False");
    return output;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}
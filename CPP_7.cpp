#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    // implementation goes here
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // more test cases...

    return 0;
}
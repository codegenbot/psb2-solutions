#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const string& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a) {
    return a == {"grunt", "prune"};
}

int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == filter_by_substring({"grunt", "prune"}, "run"));
    
    cout << "Test cases passed!" << endl;
    
    return 0;
}
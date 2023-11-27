#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> sort_even_length_strings(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].length() % 2 == 0) {
            result.push_back(lst[i]);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    vector<string> input = { "aaaa", "bbbb", "dd", "cc" };
    vector<string> expected_output = { "cc", "dd", "aaaa", "bbbb" };

    vector<string> sorted_list = sort_even_length_strings(input);

    assert(issame(sorted_list, expected_output));

    return 0;
}
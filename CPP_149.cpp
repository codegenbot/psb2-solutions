#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

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

int main() {
    vector<string> input = { "aaaa", "bbbb", "dd", "cc" };
    vector<string> expected_output = { "cc", "dd", "aaaa", "bbbb" };

    vector<string> sorted_list = sort_even_length_strings(input);

    assert(sorted_list == expected_output);

    return 0;
}
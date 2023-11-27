#include <iostream>
#include <vector>
using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string str : lst) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\nthe string " + to_string(result.size()) + " of the input.");
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
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\nthe string 0 of the input.",
        "the number of odd elements 3\nthe string 1 of the input.",
        "the number of odd elements 2\nthe string 2 of the input."
    }));

    return 0;
}
#include <iostream>
#include <cassert>
#include <string>
#include <vector>

using namespace std;

string match_parens(vector<string> lst) {
    int count = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else {
                count--;
            }
        }
    }
    return count == 0 ? "Yes" : "No";
}

int main() {
    assert (match_parens({")", "("}) == "Yes" );
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string match_parens(std::vector<std::string> lst);

int main() {
    assert(match_parens({")", "("}) == "Yes");
    return 0;
}

std::string match_parens(std::vector<std::string> lst){
    int count = 0;
    for (std::string s : lst) {
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
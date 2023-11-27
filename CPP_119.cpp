#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst);

string match_parens(vector<string> lst){
    int count = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else {
                count--;
            }
            if (count < 0) {
                return "No";
            }
        }
    }
    if (count == 0) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    // test your code here
    return 0;
}
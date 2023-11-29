#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string match_parens(vector<string> lst);

string match_parens(vector<string> lst){
    string result = "Yes";
    int count = 0;
    for(string s : lst){
        for(char c : s){
            if(c == '('){
                count++;
            }
            else{
                count--;
            }
            if(count < 0){
                result = "No";
                break;
            }
        }
        if(count < 0){
            break;
        }
    }
    if(count != 0){
        result = "No";
    }
    return result;
}

int main() {
    // Test cases
    assert(match_parens({")", "("}) == "Yes");
    // Add more test cases
    
    return 0;
}
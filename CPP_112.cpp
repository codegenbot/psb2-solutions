#include <string>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(vector<string> a){
    return a[0] == a[1];
}

vector<string> reverse_delete(string s, string c){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    string rev_result = result;
    reverse(rev_result.begin(), rev_result.end());
    bool is_palindrome = (result == rev_result);
    vector<string> output = {result, (is_palindrome ? "True" : "False")};
    return output;
}

int main(){
    assert(issame(reverse_delete("mamma", "mia")) == false);
    return 0;
}
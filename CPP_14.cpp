#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for(int i=0; i<str.length(); i++){
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b){
    // Compare vectors a and b and return true if they are the same, otherwise return false.
    // Your implementation here.
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}
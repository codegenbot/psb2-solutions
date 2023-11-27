#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\n the string " + s + " of the input.");
    }
    return result;
}

bool issame(vector<string> a,vector<string> b){
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> expected = {
        "the number of odd elements 2\n the string 271 of the input.",
        "the number of odd elements 3\n the string 137 of the input.",
        "the number of odd elements 2\n the string 314 of the input."
    };
    vector<string> result = odd_count({"271", "137", "314"});
    cout << boolalpha << issame(result, expected) << endl;
    return 0;
}
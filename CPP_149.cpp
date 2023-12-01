#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool is_same(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        if(s.length() % 2 == 0){
            result.push_back(s);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    for(const string& s : result) cout << s << " ";
    cout << endl;
    
    return 0;
}
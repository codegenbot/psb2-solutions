#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    int totalChars1 = 0;
    int totalChars2 = 0;

    for(string s : a){
        totalChars1 += s.length();
    }

    for(string s : b){
        totalChars2 += s.length();
    }

    if(totalChars1 < totalChars2){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    // Add more test cases if needed

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

int vowels_count(string s){
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    
    if(s[s.length()-1] == 'y'){
        count++;
    }
    
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    cout << "Test cases passed!" << endl;
    return 0;
}
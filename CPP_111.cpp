#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

// Forward declaration
map<char, int> histogram(string test);

bool issame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}

int main(){
    assert (issame(histogram("a") , {{'a', 1}}));

    cout << "All assertions pass." << endl;

    return 0;
}

map<char, int> histogram(string test){
    map<char, int> result;
    if(test.empty()){
        return result;
    }
    stringstream ss(test);
    string word;
    while(ss >> word){
        for(char c : word){
            result[c]++;
        }
    }
    int maxCount = 0;
    for(auto it = result.begin(); it != result.end(); ++it){
        if(it->second > maxCount){
            maxCount = it->second;
        }
    }
    map<char, int> maxLetters;
    for(auto it = result.begin(); it != result.end(); ++it){
        if(it->second == maxCount){
            maxLetters[it->first] = it->second;
        }
    }
    return maxLetters;
}
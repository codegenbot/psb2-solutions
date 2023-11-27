#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> words_string(string s);

bool issame(vector<string> a, vector<string> b);

void assertEquals(vector<string> a, vector<string> b);

int main() {
    assertEquals(words_string("ahmed     , gamal"), vector<string>{"ahmed", "gamal"});
    return 0;
}

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ',' || s[i] == ' '){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void assertEquals(vector<string> a, vector<string> b){
    if(issame(a, b)){
        cout << "Test Passed" << endl;
    }
    else{
        cout << "Test Failed" << endl;
    }
}
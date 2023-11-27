#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (string str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

vector<string> filter_by_substring(vector<string> strings, string substring, int length){
    vector<string> result;
    for (string str : strings) {
        if (str.find(substring) != string::npos && str.length() >= length) {
            result.push_back(str);
        }
    }
    return result;
}
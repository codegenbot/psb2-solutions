#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int sum1 = 0, sum2 = 0;
    for(string s : lst1){
        sum1 += s.length();
    }
    for(string s : lst2){
        sum2 += s.length();
    }
    if(sum1 < sum2){
        return lst1;
    }
    return lst2;
}

int main() {
    assert(total_match({"this"}, {}).empty());
    assert(total_match({"this", "is"}, {"a", "test"}).size() == 2);
    return 0;
}
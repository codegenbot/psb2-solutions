#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i = 0; i < game.size(); i++){
        if(game[i] == guess[i]){
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

bool isSame(vector<int> a, vector<int> b){
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

int main() {
    assert(isSame(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
    assert(isSame(compare({1,2,3,5},{1,2,3,5}), {0,0,0,0}));
    assert(isSame(compare({10,20,30},{10,20,30}), {0,0,0}));
    cout << "All test cases pass" << endl;
    return 0;
}
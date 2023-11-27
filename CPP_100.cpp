#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    // implementation of issame function
    // ...
    return true;
}

vector<int> make_a_pile(int n){
    vector<int> levels;
    int stones = n;
    levels.push_back(stones);
    for(int i = 1; i < n; i++){
        if(n % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    return levels;
}

int main(){
    vector<int> a_pile = make_a_pile(8);
    assert(issame(a_pile, vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    // rest of the main function
    // ...
    return 0;
}
#include <iostream>
#include <vector>
#include <cassert> // 1. Added the necessary header for the `assert` function

using namespace std;

vector<int> make_a_pile(int n){
    vector<int> stones;
    int numStones = n;

    for(int i = 0; i < n; i++){
        stones.push_back(numStones);
        if(n % 2 == 0){
            numStones += 2;
        } else {
            numStones += 1;
        }
    }

    return stones;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22})); // 3. Removed duplicate `main` function declaration and definition

    return 0;
}
#include <vector>
#include <cmath>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for(int i = 0; i < game.size(); i++) {
        if(game[i] == guess[i]) {
            result.push_back(0);
        }
        else {
            result.push_back(std::abs(game[i] - guess[i]));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if(a == b) {
        return true;
    }
    else {
        return false;
    }
}
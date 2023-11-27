#include <vector>
#include <cmath>

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        result.push_back(abs(game[i]-guess[i]));
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    // implementation of issame function
}

int main(){
    assert (issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
}
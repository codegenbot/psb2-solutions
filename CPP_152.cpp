#include <vector>
#include <cassert>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess){
    std::vector<int> result;
    for(int i=0; i<game.size(); i++){
        if(game[i] == guess[i]){
            result.push_back(0);
        }
        else{
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}
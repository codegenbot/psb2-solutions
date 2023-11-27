#include <iostream>
#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto value : values){
        if(auto intValue = any_cast<int>(&value)){
            result.push_back(*intValue);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
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

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    
    return 0;
}
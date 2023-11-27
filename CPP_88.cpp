#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
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

vector<int> sort_array(vector<int> array){
    if(array.size() == 0){
        return array;
    }
    
    int sum = array[0] + array[array.size()-1];
    
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    }else{
        sort(array.begin(), array.end());
    }
    
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    // Add more assertions/tests here
    return 0;
}
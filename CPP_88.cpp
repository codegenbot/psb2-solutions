#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()){
        return array;
    }
    
    int first = array[0];
    int last = array[array.size() - 1];
    
    if((first + last) % 2 == 0){
        std::sort(array.begin(), array.end(), std::greater<int>());
    }
    else{
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
   
    return 0;
}
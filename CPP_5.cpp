#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    int size_a = a.size();
    int size_b = b.size();
    
    if(size_a != size_b){
        return false;
    }
    
    for(int i=0; i<size_a; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    int size = numbers.size();
    
    for(int i=0; i<size; i++){
        result.push_back(numbers[i]);
        
        if(i != size-1){
            result.push_back(delimiter);
        }
    }
    
    return result;
}
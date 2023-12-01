#include <vector>
#include <cassert>

using namespace std;

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

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3);
    
    if(n == 0){
        return sequence;
    }
    
    sequence.push_back(1 + n / 2);
    
    if(n == 1){
        return sequence;
    }
    
    sequence.push_back(sequence[0] + sequence[1]);
    
    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]);
        }
    }
    
    return sequence;
}
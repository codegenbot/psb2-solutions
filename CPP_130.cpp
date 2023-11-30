#include <vector>

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

std::vector<int> tri(int n){
    std::vector<int> sequence;
    sequence.push_back(3);
    
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            sequence.push_back(1 + i/2);
        }
        else{
            sequence.push_back(sequence[i-1] + sequence[i-2] + sequence[i+1]);
        }
    }
    
    return sequence;
}

int main() {
    assert(issame(tri(1), std::vector<int>{1, 3}));
    
    return 0;
}
#include <vector>

vector<int> tri(int n){
    vector<int> sequence;
    sequence.push_back(3);

    if(n >= 1){
        sequence.push_back(1 + n / 2);
    }

    if(n >= 2){
        sequence.push_back(sequence[1] + sequence[0]);
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i-1] + sequence[i-2] + sequence[i+1]);
        }
    }

    return sequence;
}

bool issame(vector<int> a, vector<int> b){
    // compare the content of vector a and b
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

int main() {
    assert(issame(::tri(1), {1, 3}));

    return 0;
}
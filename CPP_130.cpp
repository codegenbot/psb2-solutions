#include <vector>
#include <cassert>

vector<int> tri(int n){
    vector<int> result;
    if(n >= 0){
        result.push_back(3);
        if(n >= 1){
            result.push_back(1);
            if(n >= 2){
                result.push_back(1 + n/2);
                for(int i = 3; i <= n; i++){
                    if(i % 2 == 0){
                        result.push_back(1 + i/2);
                    } else {
                        result.push_back(result[i-1] + result[i-2] + result[i+1]);
                    }
                }
            }
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(tri(1), {1, 3}));

    return 0;
}
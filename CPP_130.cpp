#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> tri(int n);

int main() {
    assert(tri(1) == vector<int>{1, 3});
    return 0;
}

vector<int> tri(int n){
    vector<int> result;
    result.push_back(3); 

    if(n == 0){
        return result;
    }

    result.push_back(1); 

    if(n == 1){
        return result;
    }

    result.push_back(2); 

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            result.push_back(1 + i / 2);
        }else{
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
        }
    }

    return result;
}
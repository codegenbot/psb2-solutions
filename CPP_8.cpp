#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}
#include <vector>

std::vector<int> sum_product(std::vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}

bool isSame(std::vector<int> a, std::vector<int> b){
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
    assert(isSame(sum_product({10}), {10, 10}));

    return 0;
}
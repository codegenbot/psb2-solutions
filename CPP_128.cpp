#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    int sign = 1;
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0){
            sign *= 1;
        }
        else if(arr[i] < 0){
            sign *= -1;
        }
        sum += abs(arr[i]);
    }
    
    return sign * sum * product;
}

int main() {
    assert (prod_signs({-1, 1, 1, 0}) == 0);
    
    return 0;
}
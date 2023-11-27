#include <vector>
#include <iostream>

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    std::vector<int> result(2, 0);
    int largestNegative = 0;
    int smallestPositive = 0;
    
    for(int num : lst){
        if(num < 0 && num < largestNegative){
            largestNegative = num;
        }
        if(num > 0 && (num < smallestPositive || smallestPositive == 0)){
            smallestPositive = num;
        }
    }
    
    result[0] = largestNegative;
    result[1] = smallestPositive;
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    std::cout << "Test passed!" << std::endl;
    
    return 0;
}
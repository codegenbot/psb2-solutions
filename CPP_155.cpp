#include <iostream>
#include <vector>
#include <string>
#include <cmath>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    
    std::string numStr = std::to_string(std::abs(num));
    
    for(char c : numStr){
        int digit = c - '0';
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    std::vector<int> result = {evenCount, oddCount};
    return result;
}
#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size()!=b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main(){
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}
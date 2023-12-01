#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> rollingMax;
    int maxSoFar = std::INT_MIN;

    for(int i=0; i<numbers.size(); i++){
        maxSoFar = std::max(maxSoFar, numbers[i]);
        rollingMax.push_back(maxSoFar);
    }

    return rollingMax;
}

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
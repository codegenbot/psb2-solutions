#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_vector(std::vector<int> arr){
    std::sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if(countA == countB){
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}
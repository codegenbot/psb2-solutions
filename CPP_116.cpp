#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> arr){
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
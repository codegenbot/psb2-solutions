#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0){
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2.5, -4.3, 3.0, 2.0, 7.5};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 13);
    
    return 0;
}
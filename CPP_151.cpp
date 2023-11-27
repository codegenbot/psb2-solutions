#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for(int i=0; i<lst.size(); i++) {
        if(lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.5, 3.0, 4.5, 5.0, 6.5};
    double result = double_the_difference(lst);
    
    double odd_sum = 3.0*3.0 + 5.0*5.0; // Expected odd_sum value
    
    assert(double_the_difference(lst) == odd_sum);
    
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
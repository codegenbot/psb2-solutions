#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(std::vector<float> lst){
    double sum = 0;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0){
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.5, 3.5, 4.5, 5.5};
    std::cout << "Odd Sum: " << double_the_difference(lst) << std::endl;
    return 0;
}
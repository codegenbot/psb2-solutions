#include <vector>
#include <cassert>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold);

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
           if(std::abs(numbers[i] - numbers[j]) <= threshold){
               return true;
           }
        }
    }
    return false;
}
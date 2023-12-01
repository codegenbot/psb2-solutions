#include <iostream>
#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers){
    float sum = 0;
    float mean = 0;
    float mad = 0;
    
    // Calculate the sum of all numbers
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    
    // Calculate the mean
    mean = sum / numbers.size();
    
    // Calculate the mean absolute deviation
    for(int i = 0; i < numbers.size(); i++){
        mad += std::abs(numbers[i] - mean);
    }
    mad /= numbers.size();
    
    return mad;
}
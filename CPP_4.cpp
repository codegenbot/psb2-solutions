float mean_absolute_deviation(vector<float> numbers){
    float sum = 0.0;
    float mean = 0.0;
    float mad = 0.0;
    
    // Calculate sum of numbers
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    
    // Calculate mean of numbers
    mean = sum / numbers.size();
    
    // Calculate mean absolute deviation
    for(int i=0; i<numbers.size(); i++){
        mad += abs(numbers[i] - mean);
    }
    mad /= numbers.size();
    
    return mad;
}
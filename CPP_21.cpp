vector<float> rescale_to_unit(vector<float> numbers){
    float min = numbers[0];
    float max = numbers[0];

    // Find the minimum and maximum values in the vector
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
        if(numbers[i] > max){
            max = numbers[i];
        }
    }

    // Apply linear transform to each element in the vector
    for(int i=0; i<numbers.size(); i++){
        numbers[i] = (numbers[i] - min) / (max - min);
    }

    return numbers;
}
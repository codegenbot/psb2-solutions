float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    float mean = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    mean = sum / numbers.size();
    float deviation = 0;
    for (int i = 0; i < numbers.size(); i++) {
        deviation += abs(numbers[i] - mean);
    }
    return deviation / numbers.size();
}
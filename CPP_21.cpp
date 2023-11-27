#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    // Function implementation
}

vector<float> rescale_to_unit(vector<float> numbers){ 
    float min_num = numbers[0];
    float max_num = numbers[0];
    
    // Find the minimum and maximum numbers in the vector
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    
    // Apply linear transformation to each number in the vector
    for(int i = 0; i < numbers.size(); i++){
        numbers[i] = (numbers[i] - min_num) / (max_num - min_num);
    }
    
    return numbers;
}

int main() {
    // Call the rescale_to_unit function
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    // Print the rescaled numbers
    for(int i = 0; i < rescaled_numbers.size(); i++){
        cout << rescaled_numbers[i] << " ";
    }
    
    return 0;
}
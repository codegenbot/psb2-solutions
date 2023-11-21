#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool has_close_elements(vector<float> numbers, float threshold){
    for (int i = 0; i < numbers.size(); i++){
        for (int j = i + 1; j < numbers.size(); j++){
            if (abs(numbers[i] - numbers[j]) < threshold){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    assert(has_close_elements(a, 0.5) == true);
    return 0;
}
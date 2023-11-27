#include <iostream>
#include <vector>
#include <cmath>

float my_max_element(std::vector<float> l){
    float max_val = l[0];
    for(int i = 1; i < l.size(); i++){
        if(l[i] > max_val){
            max_val = l[i];
        }
    }
    return max_val;
}

int main() {
    // Test your function
    assert (std::abs(my_max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    
    // The rest of your code here
    
    return 0;
}
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers);

bool issame(vector<float> a, vector<float> b);

vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = INFINITY;
    pair<float, float> closest_elements;
    
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                closest_elements = make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    vector<float> result;
    result.push_back(closest_elements.first);
    result.push_back(closest_elements.second);
    
    return result;
}

bool issame(vector<float> a, vector<float> b);

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> numbers = {1.1, 2.2, 3.3, 2.2, 1.1};
    vector<float> closest_elements = find_closest_elements(numbers);
    
    for(int i = 0; i < closest_elements.size(); i++){
        cout << closest_elements[i] << " ";
    }
    
    return 0;
}
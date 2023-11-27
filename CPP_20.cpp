#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>

bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> find_closest_elements(std::vector<float> numbers){
    std::sort(numbers.begin(), numbers.end());
    std::vector<float> result;
    float minDiff = INT_MAX;

    for(int i = 0; i < numbers.size() - 1; i++){
        float diff = std::abs(numbers[i] - numbers[i+1]);
        if(diff < minDiff){
            minDiff = diff;
            result.clear();
            result.push_back(numbers[i]);
            result.push_back(numbers[i+1]);
        }
    }

    return result;
}

bool issame(std::vector<float> a, std::vector<float> b){
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

int main(){
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}
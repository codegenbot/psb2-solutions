#include <vector>
#include <cassert>

using namespace std;

bool is_same(vector<int> a, vector<int> b){
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

vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int maxNum = numbers[0];
    rollingMax.push_back(maxNum);
    
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] > maxNum){
            maxNum = numbers[i];
        }
        rollingMax.push_back(maxNum);
    }
    
    return rollingMax;
}
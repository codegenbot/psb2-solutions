#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b);

vector<int> remove_duplicates(vector<int> numbers);

int main() {
    vector<int> numbers = {1, 2, 3, 4, 2, 3, 5};
    vector<int> result = remove_duplicates(numbers);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}
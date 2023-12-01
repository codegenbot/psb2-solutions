#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int num1, int num2){
    return num1 == num2;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(std::count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main(){
    std::vector<int> numbers = {1, 2, 3, 4, 5, 5, 6, 7, 7, 8};
    std::vector<int> unique_numbers = remove_duplicates(numbers);
    for(int i=0; i<unique_numbers.size(); i++){
        std::cout << unique_numbers[i] << " ";
    }
    return 0;
}
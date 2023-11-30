#include <iostream>
#include <vector>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    
    for(int num : nums){
        string str = to_string(abs(num));
        
        if(str[0] % 2 != 0 && str[str.size()-1] % 2 != 0 && num > 10){
            count++;
        }
    }
    
    return count;
}

int main() {
    vector<int> nums = {12, 23, -34, 45, 56};
    int result = specialFilter(nums);
    cout << result << endl;
    
    return 0;
}
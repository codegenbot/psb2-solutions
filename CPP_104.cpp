#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}
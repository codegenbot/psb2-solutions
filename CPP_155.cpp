#include <vector>
#include <cassert>

vector<int> even_odd_count(int num);

bool issame(vector<int> a, vector<int> b){
    return (a[0] == b[0] && a[1] == b[1]);
}

int main() {
    int num;
    cin >> num;

    vector<int> expectedResult{2, 3};
    vector<int> result = even_odd_count(num);

    assert(issame(expectedResult, result));

    return 0;
}

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    int digit;
    
    num = abs(num);
    
    while(num > 0){
        digit = num % 10;
        
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
        
        num = num / 10;
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}
#include <iostream>
#include <vector>
using namespace std;

bool isVectorSorted(vector<int> lst){
    int n = lst.size();
    
    // Check if vector has more than 1 duplicate of the same number
    for(int i = 0; i < n-1; i++){
        if(lst[i] == lst[i+1]){
            return false;
        }
    }
    
    // Check if vector is sorted in ascending order
    for(int i = 0; i < n-1; i++){
        if(lst[i] > lst[i+1]){
            return false;
        }
    }
    
    return true;
}

int main(){
    // Test cases
    bool result1 = isVectorSorted({1, 2, 3, 4});
    bool result2 = isVectorSorted({4, 3, 2, 1});
    
    // Output the results
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    
    return 0;
}
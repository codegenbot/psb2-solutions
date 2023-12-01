#include <iostream>
#include <vector>
#include <cassert>

vector<int> largest_smallest_integers(vector<int> lst);

int main() {
    assert (issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largestNegative = 0;
    int smallestPositive = 0;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0 && lst[i] < largestNegative){
            largestNegative = lst[i];
        }
        
        if(lst[i] > 0 && (smallestPositive == 0 || lst[i] < smallestPositive)){
            smallestPositive = lst[i];
        }
    }
    
    return {largestNegative, smallestPositive};
}
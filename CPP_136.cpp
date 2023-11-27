#include <vector>
#include <cassert>

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largest_negative = 0;
    int smallest_positive = 0;

    for(int num : lst){
        if(num < 0 && num < largest_negative){
            largest_negative = num;
        }
        if(num > 0 && (num < smallest_positive || smallest_positive == 0)){
            smallest_positive = num;
        }
    }

    result[0] = largest_negative;
    result[1] = smallest_positive;

    return result;
}

int main(){
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == vector<int>{-3, 1});
    return 0;
}
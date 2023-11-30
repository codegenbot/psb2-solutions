#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == floor(lst[i]) && (int)lst[i] % 2 != 0){
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main(){
    vector<float> lst = {2.5, 3.0, 4.5};
    long long odd_sum = 9; // example value

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}
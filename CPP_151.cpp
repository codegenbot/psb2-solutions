#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] > 0 && lst[i] == floor(lst[i]) && (int)lst[i] % 2 != 0){
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main(){
    vector<float> lst = {2, 3, 4, 5.5, 6.7};
    long long expected_odd_sum = double_the_difference(lst);
    return 0;
}
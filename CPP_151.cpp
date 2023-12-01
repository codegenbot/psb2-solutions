#include <vector>
#include <cassert>

using namespace std;

long long double_the_difference(vector<float>& lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += num * num;
        }
    }
    return odd_sum;
}

vector<float> lst = {1, 2, 3, 4, 5};
long long odd_sum = double_the_difference(lst);
assert(odd_sum == 35);

return 0;
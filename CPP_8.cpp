#include <vector>
#include <cassert>
using namespace std;
vector<int> sum_product(vector<int> numbers){
```cpp
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    return {sum, product};

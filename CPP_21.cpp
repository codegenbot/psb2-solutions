```
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min = *min_element(numbers.begin(), numbers.end());
    float max = *max_element(numbers.begin(), numbers.end());
    vector<float> result;
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back((numbers[i] - min) / (max - min));
    }
    return result;
}
```
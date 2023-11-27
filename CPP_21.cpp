#include <algorithm>
#include <vector>

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());

    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled);
    }

    return rescaled_numbers;
}
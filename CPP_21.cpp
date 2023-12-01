#include <iostream>
#include <vector>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers);
bool issame(vector<float> a, vector<float> b);

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = numbers[0];
    float max_num = numbers[0];

    for(int i = 1; i < numbers.size(); i++) {
        if(numbers[i] < min_num) {
            min_num = numbers[i];
        }
        if(numbers[i] > max_num) {
            max_num = numbers[i];
        }
    }

    float range = max_num - min_num;
    vector<float> rescaled_numbers;

    for(int i = 0; i < numbers.size(); i++) {
        float rescaled_num = (numbers[i] - min_num) / range;
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    vector<float> input = {1.0, 2.0, 3.0, 4.0};
    vector<float> expected_output = {0.0, 0.333333, 0.666667, 1.0};

    vector<float> output = rescale_to_unit(input);

    if (issame(output, expected_output)) {
        cout << "Test case passed." << endl;
    } else {
        cout << "Test case failed." << endl;
    }

    return 0;
}
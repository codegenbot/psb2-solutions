#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int currentMax = numbers[0];
    rollingMax.push_back(currentMax);

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > currentMax) {
            currentMax = numbers[i];
        }
        rollingMax.push_back(currentMax);
    }

    return rollingMax;
}

bool issame(vector<int> a, vector<int> b) {
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

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    vector<int> result = rolling_max(numbers);

    assert(issame(result, expected));

    numbers = {5, 4, 3, 2, 1};
    expected = {5, 5, 5, 5, 5};
    result = rolling_max(numbers);

    assert(issame(result, expected));

    numbers = {1, 3, 2, 5, 4};
    expected = {1, 3, 3, 5, 5};
    result = rolling_max(numbers);

    assert(issame(result, expected));

    return 0;
}
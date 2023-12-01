#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers);

int main() {
    vector<int> numbers = {3, 2, 3, 100, 3};
    assert(issame(rolling_max(numbers), {3, 3, 3, 100, 100}));

    return 0;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int maxElement = numbers[0];
    rollingMax.push_back(maxElement);

    for(int i=1; i<numbers.size(); i++) {
        if(numbers[i] > maxElement) {
            maxElement = numbers[i];
        }
        rollingMax.push_back(maxElement);
    }

    return rollingMax;
}
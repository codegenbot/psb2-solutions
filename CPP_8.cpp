#include <vector>
#include <cassert>
using namespace std;

vector<int> sum_product(vector<int> numbers);

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    vector<int> result;
    result.push_back(sum);
    result.push_back(product);

    return result;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    assert(issame(sum_product({1, 2, 3, 4, 5}), {15, 120}));
    assert(issame(sum_product({-1, -2, -3, -4}), {-10, -24}));
    assert(issame(sum_product({0, 0, 0, 0, 0}), {0, 0}));

    return 0;
}
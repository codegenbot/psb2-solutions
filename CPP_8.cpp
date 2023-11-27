#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    std::vector<int> result;
    result.push_back(sum);
    result.push_back(product);

    return result;
}

int main() {
    std::vector<int> input = {10};
    std::vector<int> result = sum_product(input);

    if (!issame(result, input)) {
        std::cout << "Sum and product are not the same" << std::endl;
    } else {
        std::cout << "Sum and product are the same" << std::endl;
    }

    return 0;
}
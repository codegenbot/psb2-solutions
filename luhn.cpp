#include <iostream>
#include <vector>

int luhnAlgorithm(const std::vector<int>& digits) {
    int sum = 0;
    int n = digits.size();
    
    for (int i = n - 2; i >= 0; i -= 2) {
        int doubledDigit = digits[i] * 2;
        if (doubledDigit > 9) {
            doubledDigit -= 9;
        }
        sum += doubledDigit;
    }
    
    for (int i = n - 1; i >= 0; i -= 2) {
        sum += digits[i];
    }
    
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }
    
    int result = luhnAlgorithm(digits);
    std::cout << result << std::endl;
    
    return 0;
}
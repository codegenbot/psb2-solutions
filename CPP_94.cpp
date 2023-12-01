#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// Existing function

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrimeSum(vector<int> lst) {
    int largestPrime = 0;
    for (int num : lst) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }
    return sumOfDigits(largestPrime);
}

// Main function

int main() {
    vector<int> input = {127, 97, 8192};
    int result = largestPrimeSum(input);
    
    cout << result << endl;

    return 0;
}
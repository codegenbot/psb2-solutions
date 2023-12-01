#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int largestPrimeSum(vector<int> lst) {
    int largestPrime = 0;
    for (int num : lst) {
        if (isPrime(num) && num > largestPrime) {
            largestPrime = num;
        }
    }
    return sumOfDigits(largestPrime);
}
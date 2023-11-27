#include <string>

string circular_shift(int x, int shift);

#include <iostream>

int main() {
    int x, shift;
    std::cin >> x >> shift;
    
    std::cout << circular_shift(x, shift) << std::endl;
    
    return 0;
}

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}
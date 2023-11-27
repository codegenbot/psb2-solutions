#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result(2, 0);
    for(int i=1; i<=n; i++) {
        std::string num = std::to_string(i);
        int len = num.length();
        bool isPalindrome = true;
        for(int j=0; j<len/2; j++) {
            if(num[j] != num[len-j-1]) {
                isPalindrome = false;
                break;
            }
        }
        if(isPalindrome) {
            if(i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

bool isSame(std::vector<int>& a, std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> result = even_odd_palindrome(1);
    assert(isSame(result, {0, 1}));

    // Add more test cases here
    assert(isSame(even_odd_palindrome(10), {0, 9}));

    return 0;
}
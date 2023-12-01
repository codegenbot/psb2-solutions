#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift);

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }
    
    shift %= n;
    string result = str.substr(n - shift) + str.substr(0, n - shift);
    return result;
}

int main() {
    assert (circular_shift(11, 101) == "11");
    return 0;
}
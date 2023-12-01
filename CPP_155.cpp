#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num) {
    int evenCount = 0;
    int oddCount = 0;

    string numStr = to_string(abs(num));

    for (char c : numStr) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    vector<int> result = {evenCount, oddCount};
    return result;
}

int main() {
    cout << boolalpha;
    assert(even_odd_count(0) == vector<int>{1, 0});
    assert(even_odd_count(123456789) == vector<int>{4, 5});
    assert(even_odd_count(-987654321) == vector<int>{4, 5});

    return 0;
}
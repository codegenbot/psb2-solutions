```
#include <vector>
#include <iostream>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (digit > 9) {
            digit -= 10;
        }
        sum += digit;
    }
    return sum % 10 == 0;
}

int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; i++) {
        cin >> digits[i];
    }
    cout << luhn(digits) << endl;
    return 0;
}
```
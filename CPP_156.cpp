#include <iostream>
#include <vector>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> romans = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    string result = "";
    int i = 0;
    while (number > 0) {
        if (number >= nums[i]) {
            result += romans[i];
            number -= nums[i];
        }
        else {
            i++;
        }
    }

    return result;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    string roman = int_to_mini_roman(num);
    cout << "Roman numeral equivalent: " << roman << endl;

    return 0;
}
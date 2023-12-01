#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10; // Replace with your desired value
    assert(change_base(x, x + 1) == to_string(x));

    cout << "Test case passed." << endl;

    return 0;
}
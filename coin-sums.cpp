#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int nickels = cents / 5;
    cents %= 5;

    int dimes = cents / 10;
    cents %= 10;

    int quarters = cents / 25;
    cents %= 25;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}
Here is the modified code with the fixes you requested:
```
#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>
using namespace std;

double find_zero(const vector<double>& coeffs) {
    // TODO: implement this function
}

int main() {
    int ncoeff = 0;
    vector<double> coeffs;
    double solution = 0;
    while (ncoeff < 10) {
        cout << "Enter coefficient: ";
        cin >> ncoeff;
        coeffs.push_back(ncoeff);
    }
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
}

double poly(const vector<double>& coeffs, double x) {
    // TODO: implement this function
}
```
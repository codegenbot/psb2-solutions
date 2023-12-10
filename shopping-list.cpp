```
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    vector<float> prices;
    vector<float> discounts;
    float total = 0.0;
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        float price, discount;
        cin >> price >> discount;
        prices.push_back(price);
        discounts.push_back(discount);
    }
    for (i = 0; i < n; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.
For example,
input:
1
50.0
1
100.0
output:
0.0
input:
1
50.0
1
10.0
output:
45.0
input:
2
20.0 20.0
2
100.0 50.0
output:
10.0
input:
2
20.0 20.0
2
20.0 0.0
output:
36.0
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.0
*/
int main() {
int numItems;
  while (cin >> numItems) {
    vector<float> prices;
    vector<float> discount;
    for (int i = 0; i < numItems; i++) {
      float price;
      cin >> price;
      prices.push_back(price);
    }
    for (int i = 0; i < numItems; i++) {
      float disc;
      cin >> disc;
      discount.push_back(disc);
    }
    float total = 0.00;
    for (int i = 0; i < numItems; i++) {
      float price = prices[i];
      float percent = discount[i];
      float priceAfterDiscount = price - price * percent / 100;
      total += priceAfterDiscount; 
    }
    printf("%.2f\n", total);
  }
  return 0;
}

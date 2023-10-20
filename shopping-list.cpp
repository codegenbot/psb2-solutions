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
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<float> price(n);
        vector<float> discount(n);
        for(int i=0;i<n;i++){
            cin>>price[i];
        }
        for(int i=0;i<n;i++){
            cin>>discount[i];
        }
        float total = 0;
        for(int i=0;i<n;i++){
            float x = price[i] - (price[i] * discount[i]/100);
            total += x;
        }
        printf("%.2f\n",total);
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector> 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> v1, v2;
    for (int i = 0; i < n; i++) {
        float temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        float temp;
        cin >> temp;
        v2.push_back(temp);
    }
    float res = 0;
    for (int i = 0; i < n; i++) {
        res += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    printf("%.10f\n", sqrt(res * 1.f));
    return 0;
}

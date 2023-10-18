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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
-19
40
input:
2
-4 4
0
output:
-4
4
*/
int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

void print(int a, int b) {
    if (a < b) {
        cout << a << "\n" << b << "\n";
    } else {
        cout << b << "\n" << a << "\n";
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int target;
    cin >> target;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int complement = target - v[i];
        if (m.find(complement) != m.end()) {
            cout << min(v[i], complement) << "\n";
            cout << max(v[i], complement) << "\n";
            break;
        }
        m[v[i]] = i;
    }
}

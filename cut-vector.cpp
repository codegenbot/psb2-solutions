#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    vector<int> v;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        int diff = abs(v[i] - v[n-1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<int> subvec1, subvec2;
    for (int i = 0; i < n; i++) {
        if (i <= cutIndex) {
            subvec1.push_back(v[i]);
        } else {
            subvec2.push_back(v[i]);
        }
    }
    cout << "Subvector 1: ";
    for (int i = 0; i < subvec1.size(); i++) {
        cout << subvec1[i] << " ";
    }
    cout << endl;
    cout << "Subvector 2: ";
    for (int i = 0; i < subvec2.size(); i++) {
        cout << subvec2[i] << " ";
    }
    cout << endl;
    return 0;
}
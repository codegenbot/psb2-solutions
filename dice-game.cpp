
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double prob = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                prob += 1.0 / (n * m);
            }
        }
    }
    return prob;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}
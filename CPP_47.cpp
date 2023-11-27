#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

using namespace std;

float median(vector<float> l){
    sort(l.begin(), l.end());
    int n = l.size();
    if(n % 2 == 0){
        return (l[n/2 - 1] + l[n/2]) / 2;
    }
    else{
        return l[n/2];
    }
}

int main() {
    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4 );
    assert(abs(median({9, 1, 5, 3}) - 4) < 1e-4);
    return 0;
}
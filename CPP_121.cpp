#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

long long solutions(vector<int> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}
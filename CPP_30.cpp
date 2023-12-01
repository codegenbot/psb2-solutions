#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> positive_nums;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] > 0) {
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main() {
    assert(issame(get_positive({}), get_positive({})));
    return 0;
}
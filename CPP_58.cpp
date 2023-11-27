#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    vector<int> l1 = a;
    vector<int> l2 = b;
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result.empty();
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}
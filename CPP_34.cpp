#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    assert(issame(unique({{5, 3, 5, 2, 3, 3, 9, 0, 123}}), {{0, 2, 3, 5, 9, 123}}));

    cout << "Test passed." << endl;
    return 0;
}
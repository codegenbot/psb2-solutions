#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}

int main()
{
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    assert (issame(unique(l), {0, 2, 3, 5, 9, 123}));

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        if (left != right) {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        } else {
            result.push_back(lst[left]);
        }
        left++;
        right--;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({1, 2, 3, 4, 5}), {1, 5, 2, 4, 3}));
    assert(issame(strange_sort_list({9, 10, 7, 5}), {5, 10, 7, 9}));
    assert(issame(strange_sort_list({}), {}));
    assert(issame(strange_sort_list({1, 2, 3}), {1, 3, 2}));

    cout << "All test cases pass" << endl;
    return 0;
}
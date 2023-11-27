#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool is_same(vector<vector<int>> a, vector<vector<int>> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for(int i=0; i<lst.size(); i++){
        for(int j=0; j<lst[i].size(); j++){
            if(lst[i][j] == x){
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0] < b[0];
    });
    for(int i=0; i<result.size(); i++){
        sort(result[i].begin(), result[i].end(), greater<int>());
    }
    return result;
}

int main() {
    assert (is_same(get_row({{}, {1}, {1, 2, 3}}, 3) , {{2, 2}}));
    return 0;
}
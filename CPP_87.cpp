#include <vector>

vector<vector<int>> get_row(vector<vector<int>> lst, int x);

int main() {
    // Test cases
    vector<vector<int>> lst = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x = 5;
    vector<vector<int>> result = get_row(lst, x);
  
    return 0;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                vector<int> coordinate = {i, j};
                result.push_back(coordinate);
            }
        }
    }
    // Sort coordinates initially by rows in ascending order
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
    // Sort coordinates of the row by columns in descending order
    for (int i = 0; i < result.size(); i++) {
        sort(result[i].begin(), result[i].end(), greater<int>());
    }
    return result;
}
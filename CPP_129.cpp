#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k);

bool issame(vector<int> a, vector<int> b);

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int curRow = 0, curCol = 0;

    while (k > 0) {
        path.push_back(grid[curRow][curCol]);
        visited[curRow][curCol] = true;
        k--;

        if (curRow + 1 < n && !visited[curRow + 1][curCol]) {
            curRow++;
        } else if (curCol + 1 < n && !visited[curRow][curCol + 1]) {
            curCol++;
        } else {
            break;
        }
    }

    return path;
}

bool issame(vector<int> a, vector<int> b) {
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
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

void dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>& path, vector<vector<bool>>& visited) {
    int n = grid.size();
    if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y] || k < 0) {
        return;
    }
    
    visited[x][y] = true;
    
    // Add the current cell to the path
    path.push_back(grid[x][y]);
    
    // Check if the goal cell has been reached
    if (x == n - 1 && y == n - 1) {
        return;
    }
    
    // Try moving right
    dfs(grid, x, y + 1, k - 1, path, visited);
    
    // Try moving down
    dfs(grid, x + 1, y, k - 1, path, visited);
    
    // Try moving left
    dfs(grid, x, y - 1, k - 1, path, visited);
    
    // Try moving up
    dfs(grid, x - 1, y, k - 1, path, visited);
    
    // Remove the current cell from the path when backtracking
    path.pop_back();
    
    visited[x][y] = false;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    // Find the minimum value in the grid
    int minValue = grid[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            minValue = min(minValue, grid[i][j]);
        }
    }

    // Find the starting cell with the minimum value
    int startX, startY;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] == minValue){
                startX = i;
                startY = j;
                break;
            }
        }
    }

    // Perform DFS to find the minimum path
    dfs(grid, startX, startY, k, path, visited);

    return path;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}
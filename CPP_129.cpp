#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    std::vector<int> path;
    std::vector<std::vector<bool>> visited(n, std::vector<bool>(m, false));
    
    int currRow = 0, currCol = 0;
    path.push_back(grid[currRow][currCol]);
    visited[currRow][currCol] = true;
    
    while(path.size() < k){
        int nextRow = -1, nextCol = -1;
        int minValue = INT_MAX;
        
        // Check all possible neighbors
        if(currRow > 0 && !visited[currRow-1][currCol] && grid[currRow-1][currCol] < minValue){
            nextRow = currRow - 1;
            nextCol = currCol;
            minValue = grid[currRow-1][currCol];
        }
        if(currRow < n-1 && !visited[currRow+1][currCol] && grid[currRow+1][currCol] < minValue){
            nextRow = currRow + 1;
            nextCol = currCol;
            minValue = grid[currRow+1][currCol];
        }
        if(currCol > 0 && !visited[currRow][currCol-1] && grid[currRow][currCol-1] < minValue){
            nextRow = currRow;
            nextCol = currCol - 1;
            minValue = grid[currRow][currCol-1];
        }
        if(currCol < m-1 && !visited[currRow][currCol+1] && grid[currRow][currCol+1] < minValue){
            nextRow = currRow;
            nextCol = currCol + 1;
            minValue = grid[currRow][currCol+1];
        }
        
        // Move to the next cell
        currRow = nextRow;
        currCol = nextCol;
        path.push_back(grid[currRow][currCol]);
        visited[currRow][currCol] = true;
    }
    
    return path;
}

int main(){
    assert (issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}
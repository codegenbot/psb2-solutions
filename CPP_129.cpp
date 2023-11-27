#include <vector>

vector<int> minPath(vector<vector<int>> grid, int k);

bool issame(vector<int> a, vector<int> b){
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

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int row = 0, col = 0;
    
    while(k > 0){
        path.push_back(grid[row][col]);
        visited[row][col] = true;
        k--;
        
        if(col+1 < n && !visited[row][col+1]){
            col++;
        }
        else if(row+1 < n && !visited[row+1][col]){
            row++;
        }
        else if(col-1 >= 0 && !visited[row][col-1]){
            col--;
        }
        else if(row-1 >= 0 && !visited[row-1][col]){
            row--;
        }
    }
    
    return path;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}
/*
Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
each cell of the grid contains a value. Every integer in the range {1, N * N}
inclusive appears exactly once on the cells of the grid.

You have to find the minimum path of length k in the grid. You can start
from any cell, and in each step you can move to any of the neighbor cells,
in other words, you can go to cells which share an edge with you current
cell.
Please note that a path of length k means visiting exactly k cells (not
necessarily distinct).
You CANNOT go off the grid.
A path A (of length k) is considered less than a path B (of length k) if
after making the ordered vectors of the values on the cells that A and B go
through (let's call them lst_A and lst_B), lst_A is lexicographically less
than lst_B, in other words, there exist an integer index i (1 <= i <= k)
such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
lst_A[j] = lst_B[j].
It is guaranteed that the answer is unique.
Return an ordered vector of the values on the cells that the minimum path go through.

Examples:

    Input: grid = { {1,2,3}, {4,5,6}, {7,8,9}}, k = 3
    Output: {1, 2, 1}

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
    int r=grid.size();
    int c=grid[0].size();
    vector<int> ans;
    int min=grid[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]<min){
                min=grid[i][j];
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]==min){
                ans.push_back(grid[i][j]);
                if(k==1){
                    return ans;
                }
                if(i==0){
                    if(j==0){
                        if(grid[i][j+1]<grid[i+1][j]){
                            j++;
                        }
                        else{
                            i++;
                        }
                    }
                    else if(j==c-1){
                        if(grid[i][j-1]<grid[i+1][j]){
                            j--;
                        }
                        else{
                            i++;
                        }
                    }
                    else{
                        if(grid[i][j-1]<grid[i+1][j]&&grid[i][j-1]<grid[i][j+1]){
                            j--;
                        }
                        else if(grid[i+1][j]<grid[i][j-1]&&grid[i+1][j]<grid[i][j+1]){
                            i++;
                        }
                        else{
                            j++;
                        }
                    }
                }
                else if(i==r-1){
                    if(j==0){
                        if(grid[i][j+1]<grid[i-1][j]){
                            j++;
                        }
                        else{
                            i--;
                        }
                    }
                    else if(j==c-1){
                        if(grid[i][j-1]<grid[i-1][j]){
                            j--;
                        }
                        else{
                            i--;
                        }
                    }
                    else{
                        if(grid[i][j-1]<grid[i][j+1]&&grid[i][j-1]<grid[i-1][j]){
                            j--;
                        }
                        else if(grid[i-1][j]<grid[i][j-1]&&grid[i-1][j]<grid[i][j+1]){
                            i--;
                        }
                        else{
                            j++;
                        }
                    }
                }
                else{
                    if(j==0){
                        if(grid[i-1][j]<grid[i][j+1]&&grid[i-1][j]<grid[i+1][j]){
                            i--;
                        }
                        else if(grid[i][j+1]<grid[i-1][j]&&grid[i][j+1]<grid[i+1][j]){
                            j++;
                        }
                        else{
                            i++;
                        }
                    }
                    else if(j==c-1){
                        if(grid[i-1][j]<grid[i][j-1]&&grid[i-1][j]<grid[i+1][j]){
                            i--;
                        }
                        else if(grid[i][j-1]<grid[i-1][j]&&grid[i][j-1]<grid[i+1][j]){
                            j--;
                        }
                        else{
                            i++;
                        }
                    }
                    else{
                        if(grid[i-1][j]<grid[i][j-1]&&grid[i-1][j]<grid[i][j+1]&&grid[i-1][j]<grid[i+1][j]){
                            i--;
                        }
                        else if(grid[i][j-1]<grid[i-1][j]&&grid[i][j-1]<grid[i][j+1]&&grid[i][j-1]<grid[i+1][j]){
                            j--;
                        }
                        else if(grid[i][j+1]<grid[i-1][j]&&grid[i][j+1]<grid[i][j-1]&&grid[i][j+1]<grid[i+1][j]){
                            j++;
                        }
                        else{
                            i++;
                        }
                    }
                }
            }
        }
    }
    return ans;
    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
    // TODO: Complete the following code given the task description and function signature.
}
int main(){
    vector<vector<int>> grid={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=minPath(grid,3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

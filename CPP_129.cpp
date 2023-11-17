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

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
    vector<vector<int>> visited(grid.size(), vector<int>(grid.size(), 0));
    vector<int> path;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main(){
    assert (issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 3) , {1, 2, 1}));
    assert (issame(minPath({{5, 9, 3}, {4, 1, 6}, {7, 8, 2}}, 1) , {1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 1) , {1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 2) , {1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 3) , {1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 4) , {1, 2, 1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 5) , {1, 2, 1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 6) , {1, 2, 1, 2, 1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 7) , {1, 2, 1, 2, 1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 8) , {1, 2, 1, 2, 1, 2, 1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 9) , {1, 2, 1, 2, 1, 2, 1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 10) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 11) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 12) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 13) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 14) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 15) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 16) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 17) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 18) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 19) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1}));
    assert (issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 20) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2}));
    return 0;
}
    // Complete the following code given the task description and function signature.
    return path;
}
#include<stdio.h>

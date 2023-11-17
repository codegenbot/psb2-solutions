/*
Given a positive integer n, you have to make a pile of n levels of stones.
The first level has n stones.
The number of stones in the next level is:
    - the next odd number if n is odd.
    - the next even number if n is even.
Return the number of stones in each level in a vector, where element at index
i represents the number of stones in the level (i+1).

Examples:
>>> make_a_pile(3)
{3, 5, 7}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> make_a_pile(int n){
    vector<int> result;
    for(int i = 0; i < n; i++){
        result.push_back(n);
        if(n % 2 == 0){
            n += 2;
        }
        else{
            n += 1;
        }
    }
    return result;
}

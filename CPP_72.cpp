#include<stdio.h>
#include<vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for(int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if(sum <= w) {
        for(int i = 0; i < q.size()/2; i++) {
            if(q[i] != q[q.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
    
    return false;
}
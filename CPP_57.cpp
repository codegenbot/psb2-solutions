/*
Return true is vector elements are monotonically increasing or decreasing.
>>> monotonic({1, 2, 4, 20})
true
>>> monotonic({1, 20, 4, 10})
false
>>> monotonic({4, 1, 0, -10})
true
*/
#include<stdio.h>
#include<vector>
using namespace std;
bool monotonic(vector<float> l){
    bool inc=true,dec=true;
    for(int i=0;i<l.size()-1;i++){
        if(l[i]>l[i+1])
            inc=false;
        if(l[i]<l[i+1])
            dec=false;
    }
    return inc||dec;
}

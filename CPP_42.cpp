/*
Return vector with elements incremented by 1.
>>> incr_vector({1, 2, 3})
{2, 3, 4}
>>> incr_vector({5, 3, 5, 2, 3, 3, 9, 0, 123})
{6, 4, 6, 3, 4, 4, 10, 1, 124}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> incr_list(vector<int> l){
  vector<int> v;
  for(int i=0;i<l.size();i++){
    v.push_back(l[i]+1);
  }
  return v;
}

/*
Return only positive numbers in the vector.
>>> get_positive({-1, 2, -4, 5, 6})
{2, 5, 6}
>>> get_positive({5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10})
{5, 3, 2, 3, 9, 123, 1}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
vector<float> get_positive(vector<float> l){
vector<float> new_l;
for(int i=0;i<l.size();i++){
if(l[i]>0){
new_l.push_back(l[i]);
}
}
return new_l;
}
int main(){
vector<float> l={-1, 2, -4, 5, 6};
vector<float> new_l=get_positive(l);
for(int i=0;i<new_l.size();i++){
printf("%f\t",new_l[i]);
}
return 0;
}

/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
int sum=0;
for(int i=1;i<lst.size();i+=2){
if(lst[i]%2==0){
sum+=lst[i];
}
}
return sum;
}
int main(){
vector<int> a;
a.push_back(4);
a.push_back(2);
a.push_back(6);
a.push_back(7);
printf("%d",add(a));
return 0;
}
using namespace std;
int add(vector<int> lst){

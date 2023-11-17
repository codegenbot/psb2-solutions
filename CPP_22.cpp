/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp>  // for boost::any
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
vector<int> res;
for(auto &i:values){
if(i.type()==typeid(int)){
res.push_back(boost::any_cast<int>(i));
}
}
return res;
}
int main(){
list_any values={"a",3.14,5,1,2,3,"abc",{},{}};
vector<int> res=filter_integers(values);
for(auto &i:res){
cout<<i<<" ";
}
}

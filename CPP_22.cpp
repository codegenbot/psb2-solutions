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
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
vector<int> result;
for(auto it=values.begin();it!=values.end();++it)
if(*it.type()==typeid(int))
result.push_back(boost::any_cast<int>(*it));
return result;
}
int main()
{
list_any l1={"a",3.14,5};
vector<int> result=filter_integers(l1);
for(auto it=result.begin();it!=result.end();++it)
cout<<*it<<" ";
return 0;
}

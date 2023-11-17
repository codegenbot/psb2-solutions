/*
Given a string representing a space separated lowercase letters, return a map
of the letter with the most repetition and containing the corresponding count.
If several letters have the same occurrence, return all of them.

Example:
histogram("a b c") == {{"a", 1}, {"b", 1}, {"c", 1}}
histogram("a b b a") == {{"a", 2}, {"b", 2}}
histogram("a b c a b") == {{"a", 2}, {"b", 2}}
histogram("b b b b a") == {{"b", 4}}
histogram("") == {}

*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
map<char,int> histogram(string test){
	map<char,int> result;
	map<char,int>::iterator it;
	int max=0;
	for(int i=0;i<test.length();i++){
		if(result.find(test[i])==result.end()){
			result[test[i]]=1;
		}
		else{
			result[test[i]]++;
		}
		if(result[test[i]]>max){
			max=result[test[i]];
		}
	}
	for(it=result.begin();it!=result.end();it++){
		if(it->second!=max){
			result.erase(it);
		}
	}
	return result;
}
int main(){
	string test;
	map<char,int> result;
	map<char,int>::iterator it;
	getline(cin,test);
	result=histogram(test);
	for(it=result.begin();it!=result.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}

/*
Given a map, return true if all keys are strings in lower 
case or all keys are strings in upper case, else return false.
The function should return false is the given map is empty.
Examples:
check_map_case({{"a","apple"}, {"b","banana"}}) should return true.
check_map_case({{"a","apple"}, {"A","banana"}, {"B","banana"}}) should return false.
check_map_case({{"a","apple"}, {"8","banana"}, {"a","apple"}}) should return false.
check_map_case({{"Name","John"}, {"Age","36"}, {"City","Houston"}}) should return false.
check_map_case({{"STATE","NC"}, {"ZIP","12345"} }) should return true.
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
bool check_dict_case(map<string,string> dict){
	if(dict.size()==0)
		return false;
	map<string,string>::iterator it;
	int upper=0,lower=0;
	for(it=dict.begin();it!=dict.end();it++){
		if(isupper(it->first[0]))
			upper++;
		else if(islower(it->first[0]))
			lower++;
		else
			return false;
	}
	if(upper==0 || lower==0)
		return true;
	else
		return false;
}
int main(){
	map<string,string> dict;
	dict["a"]="apple";
	dict["b"]="banana";
	dict["A"]="banana";
	dict["B"]="banana";
	dict["8"]="banana";
	dict["a"]="apple";
	dict["Name"]="John";
	dict["Age"]="36";
	dict["City"]="Houston";
	dict["STATE"]="NC";
	dict["ZIP"]="12345";
	printf("%d\n",check_dict_case(dict));
	return 0;
}

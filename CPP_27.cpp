#include <iostream>
#include <string>
#include <cassert>
using namespace std;
string flip_case(string str) {
  int i;
  for (i = 0; i < str.size(); i++) {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
    else
      str[i] = str[i] + 32;
  }
  return str;
}
int main(){
	string str;
	while(getline(cin,str)){
		cout<<flip_case(str)<<endl;
	}
	return 0;
}

#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
*/
int main() {
    string input;
    getline(cin, input);
    if(input.back() == '-'){
        input.pop_back();
    }
    string result = "";
    bool flag = false;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '-'){
            flag = true;
            if(i < input.size() - 1 && input[i+1] == '-'){
                cout << " ";
                i++;
            }
        }
        else if(input[i] == ' '){
            result += ' ';
        }
        else {
            if(flag){
                result += toupper(input[i]);
                flag = false;
            }
            else{
                result += input[i];
            }
        }
    }
    cout << (result) << endl;
}

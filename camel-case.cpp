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
  string s;
  getline(cin, s);
  string res;
  bool isFirst = true;
  bool isUpper = false;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '-') {
      isUpper = true;
      continue;
    }
    if (s[i] == ' ') {
      isFirst = true;
      res += s[i];
      continue;
    }
    if (isUpper) {
      res += toupper(s[i]);
      isUpper = false;
    } else {
      if (isFirst) {
        res += toupper(s[i]);
        isFirst = false;
      } else {
        res += s[i];
      }
    }
  }
  cout << res << endl;
  return 0;
}

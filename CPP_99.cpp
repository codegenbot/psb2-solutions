/*
Create a function that takes a value (string) representing a number
and returns the closest integer to it. If the number is equidistant
from two integers, round it away from zero.

Examples
>>> closest_integer("10")
10
>>> closest_integer("15.3")
15

Note:
Rounding away from zero means that if the given number is equidistant
from two integers, the one you should return is the one that is the
farthest from zero. For example closest_integer("14.5") should
return 15 and closest_integer("-14.5") should return -15.
*/
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;
int closest_integer(string value){
int i;
for (i = 0; i < value.size(); i++)
{
if (value[i] == '.')
break;
}
if (value[i + 1] > '4')
return atoi(value.substr(0, i).c_str()) + 1;
else
return atoi(value.substr(0, i).c_str());
}

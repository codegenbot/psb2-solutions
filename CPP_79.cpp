#include<stdio.h>
#include<string>
using namespace std;
string decimal_to_binary(int decimal) {
string binary = "";
while (decimal > 0) {
binary = (decimal % 2 == 0 ? "0" : "1") + binary;
decimal /= 2;
}
return "db" + binary + "db";
}
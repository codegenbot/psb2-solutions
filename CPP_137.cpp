#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    replace(a.begin(), a.end(), ',', '.');
    replace(b.begin(), b.end(), ',', '.');
    float num1 = stof(a);
    float num2 = stof(b);
    return (num1 > num2) ? a : b;
}
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

template <typename T1, typename T2>
string compare_one(T1 a, T2 b) {
    string str_a = a;
    string str_b = to_string(b);
    replace(str_a.begin(), str_a.end(), ',', '.');
    replace(str_b.begin(), str_b.end(), ',', '.');
    float num1 = stof(str_a);
    float num2 = stof(str_b);
    return (num1 > num2) ? str_a : str_b;
}

int main() {
    assert (compare_one(string("1"), 1) == "None");
    return 0;
}
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

template <typename T1, typename T2>
string compare_one(T1 a, T2 b) {
    string str_a = to_string(a);
    string str_b = to_string(b);
    replace(str_a.begin(), str_a.end(), ',', '.');
    replace(str_b.begin(), str_b.end(), ',', '.');
    float num1 = stof(str_a);
    float num2 = stof(str_b);
    return (num1 > num2) ? str_a : str_b;
}

int main() {
    assert(boost::any_cast<string>(compare_one(string("1"), string("2"))) == "2");
    return 0;
}
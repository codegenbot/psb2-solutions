#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <cassert>

using namespace std;
using namespace boost;

template <typename T>
T compare_one(T a, T b) {
    return (a > b) ? a : b;
}

string compare_one(string a, string b) {
    replace(a.begin(), a.end(), ',', '.');
    replace(b.begin(), b.end(), ',', '.');
    float num1 = stof(a);
    float num2 = stof(b);
    return (num1 > num2) ? a : b;
}

int main() {
    assert(any_cast<string>(compare_one<string>(string("1"), "1")) == "None");
    return 0;
}
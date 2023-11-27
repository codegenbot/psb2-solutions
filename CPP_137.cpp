#include <string>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        return max(num1, num2);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        return max(num1, num2);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return max(str1, str2, [](const string& s1, const string& s2) { return s1 < s2; });
    }
    return boost::any();
}

void main() {
    assert (boost::any_cast<string>(compare_one(string("1"), string("None"))) == "None");
}
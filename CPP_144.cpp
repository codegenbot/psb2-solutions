#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool simplify(string x, string n) {
    int x_num = stoi(x.substr(0, x.find('/')));
    int x_den = stoi(x.substr(x.find('/') + 1));
    int n_num = stoi(n.substr(0, n.find('/')));
    int n_den = stoi(n.substr(n.find('/') + 1));

    int result_num = x_num * n_num;
    int result_den = x_den * n_den;

    return result_num % result_den == 0;
}

int main() {
    assert(simplify("1/5", "1/5") == false);
    
    return 0;
}
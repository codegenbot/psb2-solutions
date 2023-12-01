#include <iostream>
#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    // test cases
    vector<float> result = derivative({1.0});

    // print the result
    for (float val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
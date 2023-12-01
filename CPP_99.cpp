#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

int closest_integer(string value) {
    float num = stof(value);
    int floor_num = floor(num);
    int ceil_num = ceil(num);

    float diff_floor = abs(num - floor_num);
    float diff_ceil = abs(num - ceil_num);

    if (diff_floor == diff_ceil) {
        if (num > 0) {
            return ceil_num;
        } else {
            return floor_num;
        }
    }

    if (diff_floor < diff_ceil) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    assert(closest_integer("0") == 0);
    assert(closest_integer("1.5") == 2);
    assert(closest_integer("2.4") == 2);
    assert(closest_integer("-1.7") == -2);
    assert(closest_integer("3.00") == 3);
    assert(closest_integer("5.0000") == 5);
    assert(closest_integer("-0.500001") == 0);
    assert(closest_integer("7.99") == 8);
    // Add more test cases if needed

    return 0;
}
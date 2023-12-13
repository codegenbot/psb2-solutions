#include <string>
#include <cassert>
#include <cmath>

int closest_integer(std::string value){
    double num = std::stod(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    assert(closest_integer("3.2") == 3);
    assert(closest_integer("4.8") == 5);
    assert(closest_integer("2.5") == 3);
    assert(closest_integer("-6.3") == -6);
    return 0;
}
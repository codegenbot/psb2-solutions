#include <string>
#include <cassert>

int closest_integer(std::string value){
    float num = std::stof(value);
    int closest = std::round(num);
    if (num - closest == 0.5) {
        if (num > 0) {
            closest++;
        } else {
            closest--;
        }
    }
    return closest;
}

int main() {
    assert(closest_integer("0") == 0);
    assert(closest_integer("1.5") == 2);
    assert(closest_integer("-2.5") == -2);
    assert(closest_integer("3.9") == 4);
    assert(closest_integer("-4.9") == -5);
    // Add more test cases here
    return 0;
}
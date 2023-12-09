```cpp
#include <iostream>
#include <sstream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowOnGround = initialSnow;
    for (float i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours;
    std::cin >> initialSnow;
    std::cin >> snowFallRate;
    std::cin >> snowMeltRate;
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::cout << result;
    return 0;
}
```
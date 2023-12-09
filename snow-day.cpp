#include <iostream>
#include <sstream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, snowMeltRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> snowMeltRate;
    float result = calculateSnow(hours, initialSnow, snowFallRate, snowMeltRate);
    std::stringstream ss;
    ss << result;
    std::cout << ss.str();
    return 0;
}
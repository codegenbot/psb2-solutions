#include <iostream>
using namespace std;

float calculateSnowOnGround(int hours, float snowOnGround, float snowFallRate, float snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate; // add snow
        snowOnGround -= snowOnGround * snowMeltingRate; // melt snow
    }
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;
    float result = calculateSnowOnGround(hours, snowOnGround, snowFallRate, snowMeltingRate);
    cout << result << endl;
    return 0;
}
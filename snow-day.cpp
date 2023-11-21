#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround -= snowOnGround * meltingRate;
        snowOnGround += snowFallRate;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltingRate;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, meltingRate);
    cout << result << endl;
    return 0;
}
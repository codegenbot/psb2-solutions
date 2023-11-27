#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float currentSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow -= meltingRate;
    }
    
    return currentSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    
    return 0;
}
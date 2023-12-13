```c++
#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    for (int i = 1; i <= hours; i++) {
        snowOnGround += snowFallRate; // Add snow
        snowOnGround -= snowOnGround * meltingRate; // Melt snow
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    
    return 0;
}
```
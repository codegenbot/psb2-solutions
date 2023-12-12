```c++
#include <iostream>
using namespace std;

float calculateSnow(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    
    for(int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= snow * meltingRate;
    }
    
    return snow;
}

int main() {
    int hours; 
    float initialSnow, snowFallRate, meltingRate;
    
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float result = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << result << endl;
    
    return 0;
}
```
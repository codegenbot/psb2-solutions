#include <iostream>
using namespace std;

float calculateSnow(float hours, float snow, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        snow += rate; // accumulate snow
        float meltingAmount = melt * snow; // calculate amount to melt
        snow -= meltingAmount; // subtract melted amount
    }
    return snow;
}

int main() {
    float hours, snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;
    cout << calculateSnow(hours, snow, rate, melt) << endl;
    return 0;
}
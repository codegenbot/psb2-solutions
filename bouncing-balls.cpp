#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        bouncinessIndex = 2.0 * bouncinessIndex;
        totalDistance += 2 * startingHeight * bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}
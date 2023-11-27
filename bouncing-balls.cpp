#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        totalDistance += (firstBounceHeight * bouncinessIndex);
        bouncinessIndex *= bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}
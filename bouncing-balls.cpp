#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = 0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight * bouncinessIndex;
        startingHeight *= bouncinessIndex;
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);
    double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);
    
    cout << totalDistance << endl;
    
    return 0;
}
#include <iostream>
#include <cmath>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;
    
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * (1 - bouncinessIndex) * startingHeight;
        startingHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
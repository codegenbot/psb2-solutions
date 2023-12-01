#include <iostream>
#include <iomanip>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = firstBounceHeight + startingHeight;

    for (int i = 1; i <= numBounces; i++) {
        double bounceHeight = firstBounceHeight * bouncinessIndex;
        totalDistance += 2 * bounceHeight;
        firstBounceHeight = bounceHeight;
    }

    return totalDistance;
}

int main() {
    std::cout << std::fixed;
    double startingHeight, firstBounceHeight, numBounces;
    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;
    std::cout << "Enter height after first bounce: ";
    std::cin >> firstBounceHeight;
    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    double result = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << "Total distance traveled: " << std::setprecision(17) << result << std::endl;

    return 0;
}
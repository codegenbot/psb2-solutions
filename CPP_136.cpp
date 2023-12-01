vector<int> largest_smallest_integers(const vector<int>& lst) {
    vector<int> result = {0, 0};
    int largestNegative = 0;
    int smallestPositive = 0;

    for (int num : lst) {
        if (num < 0 && num < largestNegative) {
            largestNegative = num;
        }
        if (num > 0 && (num < smallestPositive || smallestPositive == 0)) {
            smallestPositive = num;
        }
    }

    result[0] = largestNegative;
    result[1] = smallestPositive;

    return result;
}
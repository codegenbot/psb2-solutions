#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);
    
    int intersectionLength = intersectionEnd - intersectionStart + 1;
    
    if (intersectionLength <= 1) {
        return "NO";
    }
    
    for (int i = 2; i * i <= intersectionLength; i++) {
        if (intersectionLength % i == 0) {
            return "NO";
        }
    }
    
    return "YES";
}

int main() {
    // Test cases
    assert (intersection({-2, -2}, {-3, -2}) == "NO");
    assert (intersection({1, 10}, {10, 20}) == "YES");
    assert (intersection({-5, 5}, {-10, -3}) == "YES");

    return 0;
}
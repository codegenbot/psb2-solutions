#include <string>
#include <cmath>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }
    
    int avg = round(sum / count);
    
    string binary = "";
    
    while (avg > 0) {
        binary = to_string(avg % 2) + binary;
        avg /= 2;
    }
    
    return binary;
}
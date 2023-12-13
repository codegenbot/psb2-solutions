```c++
#include <string>
#include <cassert>

using namespace std;

string rounded_avg(int n, int m);

int main() {
    assert (rounded_avg(5, 5) == "101");
    return 0;
}

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = round(sum / (m - n + 1));

    string binary = "";
    while (avg > 0) {
        binary = to_string(avg % 2) + binary;
        avg /= 2;
    }

    return binary;
}
```
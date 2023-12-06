```
#include <string>
#include <iostream>
using namespace std;

int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') { // strike
            score += 10;
        } else if (bowls[i] == '/') { // spare
            score += 10 - int(bowls[i-1]);
        } else {
            score += int(bowls[i]);
        }
    }
    return score;
}

int main() {
    string bowls = "7115XXX548/279-X53";
    cout << getScore(bowls) << endl;
    return 0;
}
```
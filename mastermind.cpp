#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool matched = false;
            for (int j = 0; j < 4; j++) {
                if (code[j] == guess[i] && !matched) {
                    whitePegs++;
                    matched = true;
                    break;
                }
            }
        }
    }
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}
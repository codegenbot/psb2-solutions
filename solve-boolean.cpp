#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression.size() == 1) {
        return expression[0] == 't';
    } else {
        int i = expression.size() - 1;
        while (i >= 0) {
            if (expression[i] == '&') {
                return evaluateBoolean(expression.substr(0, i)) && evaluateBoolean(expression.substr(i + 1));
            } else if (expression[i] == '|') {
                return evaluateBoolean(expression.substr(0, i)) || evaluateBoolean(expression.substr(i + 1));
            }
            i--;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluateBoolean(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}
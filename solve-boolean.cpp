bool evaluateBooleanExpression(string expression) {
    int opIndex = -1;
    int parenthesisCount = 0;

    for (int i = expression.length() - 1; i >= 0; i--) {
        if (expression[i] == '(') {
            parenthesisCount++;
        } else if (expression[i] == ')') {
            parenthesisCount--;
        } else if ((expression[i] == '|' || expression[i] == '&') && parenthesisCount == 0) {
            opIndex = i;
            break;
        }
    }

    if (opIndex != -1) {
        bool left = evaluateBooleanExpression(expression.substr(0, opIndex));
        bool right = evaluateBooleanExpression(expression.substr(opIndex + 1));

        if (expression[opIndex] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    } else {
        if (expression[0] == 't') {
            return true;
        } else if (expression[0] == 'f') {
            return false;
        }
    }
}
def solve_boolean(expression):
    expression = expression.lower().replace('t', 'True').replace('f', 'False')
    return bool(eval(expression))
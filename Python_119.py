def match_parens(lst):
    stack = []
    for c in lst:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if len(stack) == 0:
                return 'No'
            stack.pop()

    return 'Yes' if len(stack) == 0 else 'No'
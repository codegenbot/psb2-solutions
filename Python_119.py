def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append('(')
        else:
            if not stack:
                return 'No'
            stack.pop()
    return 'Yes' if not stack else 'No'
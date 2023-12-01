def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            else:
                if len(stack) == 0 or stack[-1] != '(':
                    return 'No'
                stack.pop()
        if len(stack) != 0:
            return 'No'
    return 'Yes'
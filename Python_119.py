def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            else:
                if not stack or stack[-1] != '(':
                    return 'No'
                stack.pop()
    if stack:
        return 'No'
    return 'Yes'
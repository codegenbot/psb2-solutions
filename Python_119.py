def match_parens(lst):
    stack = []
    for s in lst:
        if s == "(":
            stack.append(s)
        elif s == ")":
            if not stack:
                return "No"
            stack.pop()
    if stack:
        return "No"
    else:
        return "Yes"
def match_parens(lst):
    stack = []
    count = 0
    parentheses = {'(': ')'}
    
    for c in lst:
        if c in parentheses:
            stack.append(c)
            count += 1
        elif c in parentheses.values():
            if not stack or parentheses[stack[-1]] != c:
                return 'No'
            stack.pop()
            count -= 1
    
    return 'No' if count != 0 or stack else 'Yes' if not stack else 'No'
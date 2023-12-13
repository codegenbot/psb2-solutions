def parse_nested_parens(paren_string: str) -> int:
    stack = []
    max_nesting = -1

    for char in paren_string:
        if char == "(":
            stack.append(char)
            max_nesting = max(max_nesting, len(stack))
        elif char == ")":
            if stack:
                stack.pop()
            else:
                return -1

    if stack:
        return -1

    return [max_nesting]
def correct_bracketing(brackets: str) -> bool:
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append(bracket)
        elif bracket == ">":
            if len(stack) == 0 or stack[-1] != "<":
                return False
            else:
                stack.pop()
    return len(stack) == 0
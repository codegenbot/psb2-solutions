def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    count = 0
    current_group = ""
    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
        current_group += char
        if count == 0:
            result.append(current_group)
            current_group = ""
    return result
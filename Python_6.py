from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    counts = []
    open_count = 0
    max_count = -1
    for paren in paren_string:
        if paren == "(":
            open_count += 1
            max_count = max(max_count, open_count)
        elif paren == ")" and open_count > 0:
            open_count -= 1
        if open_count > 0:
            counts.append(open_count)
    return counts, max_count


paren_string = input().strip()[1:-1]
result = parse_nested_parens(paren_string)
print(*result)
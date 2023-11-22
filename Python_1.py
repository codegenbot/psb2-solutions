from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = [paren_string]
    while any(")(" in group or ")(" in group for group in result):
        result = [
            group.replace(")(", ") (").replace(")(", ") (").replace(")(", ") (")
            for group in result
        ]
    return result
from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


n = int(input())
strings = [input() for _ in range(n)]

result = longest(strings)
print("Longest string:", result)
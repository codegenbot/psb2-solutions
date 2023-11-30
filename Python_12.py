import sys
from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


result = longest(sys.argv[1].split(","))
print(result)
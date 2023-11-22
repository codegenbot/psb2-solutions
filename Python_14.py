import sys
from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string))]

string = sys.stdin.readline().strip()
prefixes = all_prefixes(string)
print(prefixes)
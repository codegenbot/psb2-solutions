import sys
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [string for string in strings if string.startswith(prefix)]

strings = sys.stdin.readline().rstrip('\n').split()
prefix = sys.stdin.readline().rstrip('\n')

filtered_strings = filter_by_prefix(strings, prefix)
print(filtered_strings)
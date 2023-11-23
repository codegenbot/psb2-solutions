from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input("Enter a list of strings, separated by space: ").strip().split()
prefix = input("Enter the prefix string: ").strip()

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)
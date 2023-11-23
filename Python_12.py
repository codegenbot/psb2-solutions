from typing import List

def longest(strings: List[str]) -> str:
    if not strings:
        return ""
    longest_string = max(strings, key=len)
    return longest_string

strings = input("Enter the strings: ").split()
result = longest(strings)
print(result)
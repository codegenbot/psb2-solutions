from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

string_input = input()
strings = string_input.split()
substring = input()
result = filter_by_substring(strings, substring)
print(result)
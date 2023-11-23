from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

input_str = input()
substring, *strings = input_str.split(maxsplit=1)
result = filter_by_substring(strings, substring)
print(result)
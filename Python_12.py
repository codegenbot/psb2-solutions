from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

input_strings = input("Enter strings separated by space (e.g. string1 string2 string3): ").split()
result = longest(input_strings)
print(result)
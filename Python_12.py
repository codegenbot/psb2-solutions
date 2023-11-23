from typing import List


def longest(strings: List[str]) -> str:
    if not strings:
        return ""
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string


input_line = input()
strings = input_line.split()

result = longest(strings)
print(result)
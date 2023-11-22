from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

strings = input().split() if input() else []
substring = input().rstrip('\r')

if not strings or not substring:
    print("Incorrect input. Please provide both a list of strings and a substring.")
    exit()

result = filter_by_substring(strings, substring)
if result:
    print(f"The strings that contain '{substring}' are: {result}")
else:
    print(f"No strings contain the substring '{substring}'.")
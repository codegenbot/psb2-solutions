from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

strings_input = input("Enter a list of strings (separated by space): ").split()
strings = strings_input if strings_input else []
substring = input().strip()

if not strings or not substring:
    print("Incorrect input. Please provide both a list of strings and a substring.")

result = filter_by_substring(strings, substring)
if result:
    print(f"The strings that contain '{substring}' are: {result}")
else:
    print(f"No strings contain the substring '{substring}'.")

Note: The only modification made is to prompt the user for input by using `input("Enter a list of strings (separated by space): ")` instead of `input().split()`.
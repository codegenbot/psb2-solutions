from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

substring = input()

strings = []
while True:
    try:
        s = input()
        strings.append(s)
    except EOFError:
        break

result = filter_by_substring(strings, substring)
print(result)
from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

input_string = input("Enter a string: ")
prefixes = all_prefixes(input_string)
print(prefixes)
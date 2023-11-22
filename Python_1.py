from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    return [group for group in paren_string.split(")") if group]

input_string = input("Enter the string: ")
output = separate_paren_groups(input_string)
print(output)
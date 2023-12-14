```python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [abs(paren_string.count('(') - paren_string.count(')')) for paren_string in paren_string]

paren_string = input("Enter the nested parentheses string: ")
result = parse_nested_parens(paren_string)
print(result)
```
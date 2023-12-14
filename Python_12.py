```python
from typing import List, Optional
import sys

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

input_strings = sys.argv[1:]
result = longest(input_strings)
print(result)
```
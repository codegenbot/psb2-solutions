
```
import re

def camel_case(string):
    # Split the input string into words using "-" as the delimiter
    words = re.split(r"\-", string)
    
    # Convert each word to camelCase by capitalizing the first letter and joining the rest of the letters in lowercase
    return "".join([word[0].upper() + word[1:].lower() for word in words])
```
Indices-of-substring. Problem description: Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap..

Currently, the code is 
```
def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]
``` 
Modify the code as  Your current implementation has an off-by-one error. The indexing is not correct for the case where the target string appears at the end of the text string. To fix this, you can use the following modified version:
```
def indices_of_substring(text, target):
    return [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
```
This will ensure that the indexing is correct and will not try to access elements beyond the end of the text string..

Here is a possible solution to the "paired-digits" problem:
```
def sum_paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i + 1]:
            total += int(s[i])
    return total
```
```
import sys

def find_zero(xs):
    x = int(sys.stdin.readline())
    result = 0
    for i in range(len(xs)):
        if xs[i] == x:
            result += 1
    return result
```
```
import numpy as np

def find_pair(arr, target):
    arr = list(map(int, input().split()))
    target = int(input())
    
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i] + arr[j] == target:
                return [arr[i], arr[j]]
    return []
```
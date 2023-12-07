```
def cut_vector(v):
    n = len(v)
    if n == 1:
        return v[0], 0
    elif n == 2:
        return v[0], v[1]
    else:
        left = []
        right = []
        for i in range(n):
            if i < n // 2:
                left.append(v[i])
            else:
                right.append(v[i])
        return (left, right)
```
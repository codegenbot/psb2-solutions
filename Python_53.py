```python
def add(x, y):
    if isinstance(x, int) and isinstance(y, int):
        return x + y
    elif isinstance(x, float) or isinstance(y, float):
        return x + y
    else:
        raise TypeError("Invalid input types")
```
```python
def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = [int(num) for num in input().split()]

print(below_zero(operations))
```
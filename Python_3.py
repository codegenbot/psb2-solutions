from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input and pass it to the function
operations = list(map(int, input().split()))
result = below_zero(operations)
print(result)
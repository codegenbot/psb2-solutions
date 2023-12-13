from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (sum_val, product)

numbers = list(map(int, input().strip().split()))
result = sum_product(numbers)
print(f"Sum: {result[0]}, Product: {result[1]}")
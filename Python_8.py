from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum = 0
    product = 1
    for num in numbers:
        sum += num
        product *= num
    return (sum, product)

numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(result)
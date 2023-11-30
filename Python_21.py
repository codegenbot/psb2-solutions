from typing import List
import sys

def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

input_numbers = list(map(float, sys.stdin.readline().strip().split()))

output = rescale_to_unit(input_numbers)
print(*output)
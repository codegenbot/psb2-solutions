from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    sorted_numbers = sorted(numbers)
    for i in range(len(sorted_numbers) - 1):
        if sorted_numbers[i + 1] - sorted_numbers[i] < threshold:
            return True
    return False


numbers = [float(num) for num in input().split()]
threshold = float(input())

result = has_close_elements(numbers, threshold)
print(result)
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

numbers = []
for _ in range(int(input())):
    numbers.append(float(input()))
print(mean_absolute_deviation(numbers))
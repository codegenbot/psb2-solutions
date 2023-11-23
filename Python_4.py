from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)


if __name__ == "__main__":
    n = int(input())
    numbers = list(map(float, input().split()))
    result = mean_absolute_deviation(numbers)
    print(result)
def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers = list(map(float, input().split()))
    threshold = float(input())
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False
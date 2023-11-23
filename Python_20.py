def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = float('inf')
    result = (0.0, 0.0)
    
    for i in range(len(numbers) - 1):
        diff = numbers[i+1] - numbers[i]
        if diff < closest:
            closest = diff
            result = (numbers[i], numbers[i+1])
    
    return result
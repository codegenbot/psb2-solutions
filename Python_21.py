def rescale_to_unit(numbers: List[float]) -> List[float]:
    smallest = min(numbers)
    largest = max(numbers)
    return [(num - smallest) / (largest - smallest) for num in numbers]
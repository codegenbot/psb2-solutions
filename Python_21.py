from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_number = min(numbers)
    max_number = max(numbers)
    return [(num - min_number) / (max_number - min_number) for num in numbers]
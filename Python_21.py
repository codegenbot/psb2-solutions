from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    try:
        numbers = [float(num) for num in numbers]
    except ValueError:
        return None

    min_num = min(numbers)
    max_num = max(numbers)
    scaled_numbers = [(num - min_num) / (max_num - min_num) for num in numbers]
    return scaled_numbers
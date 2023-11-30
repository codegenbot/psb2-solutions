from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    values = input("Enter values separated by spaces: ").split()
    values = [int(value) if value.isdigit() else value for value in values]
    filtered_values = filter_integers(values)
    print(filtered_values)
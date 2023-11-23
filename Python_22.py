from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values]


def main():
    input_values = input().strip().split()  # read space-separated input values
    if input_values:
        result = filter_integers(input_values)
        print(result)
    else:
        print("No input provided.")


if __name__ == "__main__":
    main()
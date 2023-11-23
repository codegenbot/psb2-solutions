from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values if value.isdigit()]


def main():
    values = input("Enter a comma-separated list of integers: ").split(", ")

    if all(value.isdigit() for value in values):
        result = filter_integers(values)
        if result:
            print(result)
        else:
            print("No integers found.")
    else:
        print("Invalid input. Please enter only integers separated by commas followed by a space (\", \").")


if __name__ == "__main__":
    main()
from typing import List, Union

def filter_integers(values: List[Union[int, str]]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

def main():
    values = [int(value) if value.isdigit() else value for value in input().split()]
    result = filter_integers(values)
    print(result)

if __name__ == '__main__':
    main()
from typing import List, Union

def filter_integers(values: List[Union[int, str]]) -> List[int]:
    return [value for value in values if isinstance(value, int) or (isinstance(value, str) and value.isdigit())]

def main():
    values = input().split()
    values = [int(val) if val.isdigit() else val for val in values]
    result = filter_integers(values)
    print(result)

if __name__ == '__main__':
    main()
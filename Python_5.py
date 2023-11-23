def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]


input_numbers = list(map(int, input().strip().split()))
delimiter = int(input().strip())

output = intersperse(input_numbers, delimiter)
print(*output)
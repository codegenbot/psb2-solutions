from typing import List, Tuple

def find_pairs(arr: List[int], target: int) -> List[Tuple[int, int]]:
    pairs = []
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i] + arr[j] == target:
                pairs.append((arr[i], arr[j]))
    return pairs

try:
    arr = list(map(int, input("Enter the array elements separated by space: ").split()))
    target = int(input("Enter the target sum: "))

    result = find_pairs(arr, target)
    for pair in result:
        print(pair[0], pair[1])

except ValueError:
    print("Invalid input. Please enter valid integers.")
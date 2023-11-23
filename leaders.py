def find_leaders(arr):
    leaders = []
    for i in range(len(arr)):
        if i == len(arr) - 1 or arr[i] >= max(arr[i+1:]):
            leaders.append(arr[i])
    return leaders

n = int(input())
arr = [int(input()) for _ in range(n)]

result = find_leaders(arr)
for num in result:
    print(num)
def find_leaders(arr):
    leaders = []
    max_right = arr[-1]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right and all(arr[i] >= leader for leader in leaders):
            leaders.append(arr[i])
    leaders.append(max_right)
    return leaders


n = int(input())
arr = list(map(int, input().split()))
result = find_leaders(arr)
for leader in result:
    print(leader)
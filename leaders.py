def find_leaders(arr):
    leaders = [arr[-1]] if arr else []
    max_right = arr[-1] if arr else None
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.insert(0, max_right)
    return leaders
def find_leaders(arr):
    if not arr:
        return []
    
    leaders = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= leaders[0]:
            leaders.insert(0, arr[i])
    return leaders[::-1]
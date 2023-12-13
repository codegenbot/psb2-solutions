def add_elements(arr, k):
    filtered_arr = [x for x in arr if (10 <= x <= 100) or (200 <= x <= 1000) or (100 <= x <= 199)]
    if filtered_arr:
        if 1 <= k <= len(filtered_arr):
            return filtered_arr[k-1]
        else:
            raise IndexError("Invalid k value")
    else:
        raise IndexError("No elements satisfy the conditions")
def add_elements(arr, k):
    filtered_arr = [x for x in arr if (1 <= x <= 9) or (10 <= x <= 199) or (200 <= x <= 1000) or (1000 <= x <= 1999) or x == 1]
    
    if 0 <= k < len(filtered_arr):
        return filtered_arr[k]
    else:
        return -1
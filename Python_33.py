def sort_third(lst: list):
    sorted_lst = sorted(
        [(lst[i], lst[i+1], lst[i+2]) for i in range(0, len(lst)-2, 3) if len(lst)-i >= 3],
        key=lambda x: x[2:] if len(x) >= 3 else x + (float('inf'),) * (3 - len(x))
    )
    return [num for sublist in sorted_lst for num in sublist]
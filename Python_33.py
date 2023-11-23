def sort_third(lst: list):
    groups = [lst[i:i+3] for i in range(0, len(lst)-2, 3)]
    sorted_groups = sorted(groups, key=lambda x: x[2])
    return [num for group in sorted_groups for num in group]
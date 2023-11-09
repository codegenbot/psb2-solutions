

def median(l: list):
    """Return median of elements in the list l.
    >>> median([3, 1, 2, 4, 5])
    3
    >>> median([-10, 4, 6, 1000, 10, 20])
    15.0
    sorted_list = sorted(l)
    list_length = len(l)
    if list_length % 2 == 0:
        return (sorted_list[int(list_length/2)] + sorted_list[int((list_length/2) - 1)])/2
    else:
        return sorted_list[int(list_length/2)]
    """

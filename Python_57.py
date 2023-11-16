# Complete the following code given the task description and function signature.



def monotonic(l: list) -> bool:
    """Return True is list elements are monotonically increasing or decreasing.
    >>> monotonic([1, 2, 4, 20])
    True
    >>> monotonic([1, 20, 4, 10])
    True
    """
    if l[0] < l[1]:
        for i in range(len(l)-1):
            if l[i] >= l[i+1]:
                return False
    else:
        for i in range(len(l)-1):
            if l[i] <= l[i+1]:
                return False
    return True


def monotonic([4, 1, 0, -10]) -> bool:
    """Return True is list elements are monotonically increasing or decreasing.
    >>> monotonic([1, 2, 4, 20])
    True
    >>> monotonic([1, 20, 4, 10])
    True
    """
    if l[0] < l[1]:
        for i in range(len(l)-1):
            if l[i] >= l[i+1]:
                return False
    else:
        for i in range(len(l)-1):
            if l[i] <= l[i+1]:
                return False
    return True



def sum_to_n(n: int):
    """sum_to_n is a function that sums numbers from 1 to n.
    >>> sum_to_n(20)
    465
    >>> sum_to_n(90)
    5050
    >>> sum_to_n(5)
    15
    >>> sum_to_n(10)
    55
    >>> sum_to_n(1)
    1
    if n == 1:
        return 1
    else:
        return n + sum_to_n(n-1)
    """

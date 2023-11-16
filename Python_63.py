

def fibfib(n: int):
    """The FibFib number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fibfib(0) == 0
    fibfib(1) == 0
    fibfib(2) == 1
    fibfib(n) == fibfib(n-1) + fibfib(n-2) + fibfib(n-3).
    Please write a function to efficiently compute the n-th element of the fibfib number sequence.
    >>> fibfib(1)
    0
    >>> fibfib(5)
    4
    >>> fibfib(8)
    24
    a, b, c = 0, 0, 1
    if n == 0:
        return a
    elif n == 1:
        return b
    elif n == 2:
        return c
    else:
        for i in range(n - 2):
            a, b, c = b, c, a + b + c
        return c
    """

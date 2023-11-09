

def fibfib(n: int) -> int:
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

    f = [0, 0, 1]
    if n < 3:
        return f[n]
    for i in range(3, n+1):
        f.append(f[i-1] + f[i-2] + f[i-3])
    return f[n]
    """
    f = [0, 0, 1]
    if n < 3:
        return f[n]
    for i in range(3, n+1):
        f.append(f[i-1] + f[i-2] + f[i-3])
    return f[n]



def modp(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics).
    >>> modp(3, 5)
    3
    >>> modp(1101, 101)
    2
    >>> modp(0, 101)
    1
    >>> modp(3, 11)
    8
    >>> modp(100, 101)
    1
    if n == 0:
        return 1
    elif n == 1:
        return 2%p
    else:
        t = n//2
        temp = modp(t, p)
        temp = (temp * temp) % p
        if n % 2 == 0:
            return temp
        else:
            return (temp * 2) % p


if __name__ == '__main__':
    import doctest
    doctest.testmod()
    """

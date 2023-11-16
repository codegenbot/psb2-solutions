

def derivative(xs: list):
    """ xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
     Return derivative of this polynomial in the same form.
    >>> derivative([3, 1, 2, 4, 5])
    [1, 4, 12, 20]
    >>> derivative([1, 2, 3])
    [2, 6]
    if len(xs) == 0:
        return []
    else:
        new_xs = []
        for i in range(len(xs) - 1):
            new_xs.append(xs[i + 1] * (i + 1))
        return new_xs
    """

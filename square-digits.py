def square_digits(n):
    if n == 0:
        return str(0)
    else:
        return ''.join(str(int(d) ** 2) for d in str(n))
def square_digits(n):
    return ''.join(str(int(d)**2) for d in str(n) if d != '0' or n > 0)
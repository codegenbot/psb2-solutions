def cycpattern_check(a, b):
    return len(a) == len(b) and a in (b + b[::-1])
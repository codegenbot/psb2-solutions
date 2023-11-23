def double_the_difference(lst):
    return sum([x**2 for x in lst if isinstance(x, int) and x >= 0 and x % 2 != 0])
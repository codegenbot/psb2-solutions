def double_the_difference(lst):
    return sum([x * x for x in lst if x % 2 != 0 and x >= 0 and isinstance(x, int)])
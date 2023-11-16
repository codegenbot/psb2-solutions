
def closest_integer(value):
    '''
    Create a function that takes a value (string) representing a number
    and returns the closest integer to it. If the number is equidistant
    from two integers, round it away from zero.

    Examples
    >>> closest_integer("10")
    10
    >>> closest_integer("15.3")
    15

    Note:
    Rounding away from zero means that if the given number is equidistant
    from two integers, the one you should return is the one that is the
    farthest from zero. For example closest_integer("14.5") should
    if value < 0:
        value = value * -1
        value = value // 1
        value = value + 1
        value = value * -1
    else:
        value = value // 1
        value = value + 1
    return value
    return 15 and closest_integer("-14.5") should return -15.
    '''
    if value < 0:
        value = value * -1
        value = value // 1
        value = value + 1
        value = value * -1
    else:
        value = value // 1
        value = value + 1
    return value

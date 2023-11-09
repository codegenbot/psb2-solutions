
def choose_num(x, y):
    """This function takes two positive numbers x and y and returns the
    biggest even integer number that is in the range [x, y] inclusive. If 
    there's no such number, then the function should return -1.

    For example:
    choose_num(12, 15) = 14
    if x > y:
        return -1
    else:
        if x % 2 == 1:
            x += 1
        return x
    choose_num(13, 12) = -1
    """

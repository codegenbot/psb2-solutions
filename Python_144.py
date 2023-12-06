def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))
    result = (x_num * n_num) // (x_denom * n_denom)
    if result == int(result):
        return False
    else:
        return True
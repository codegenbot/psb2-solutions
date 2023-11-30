def simplify(x, n):
    x_num, x_den = map(int, x.split('/'))
    n_num, n_den = map(int, n.split('/'))
    return (x_num * n_num) % (x_den * n_den) == 0
def get_probability(n, m):
    if n == m:
        return 0
    return 1 / (m + 1) * sum(1 for i in range(1, n + 1) if i > m)
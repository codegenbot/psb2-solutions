n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
elif n >= m:
    print((n + 1) / (2 * n))
else:
    print((m - n + 1) / (m * 1.0))
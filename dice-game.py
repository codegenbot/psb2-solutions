n = int(input())
m = int(input())

if n <= m:
    print(0.0)
else:
    print(round((n - 1) / n, 7))
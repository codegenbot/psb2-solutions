n = int(input())
m = int(input())

def dice_game(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    elif n == m:
        return 0.5
    else:
        return (n - m + 1) / float(n + m - 1)

print(1 - dice_game(n, m))
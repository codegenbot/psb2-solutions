n = int(input())
m = int(input())

def dice_game(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    elif n == m:
        return 0.5
    else:
        return (n - 1) / n

print(1 - dice_game(n, m))
def car_race_collision(n: int) -> int:
    if n % 2 == 0:
        return (n // 2) * (n - 1)
    else:
        return ((n - 1) // 2) * n
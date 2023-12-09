def car_race_collision(n: int):
    # Initialize a variable to keep track of the number of collisions
    num_collisions = 0

    # Iterate over each pair of cars moving in opposite directions
    for i in range(n):
        # Calculate the distance between the two cars
        dist = abs(i - n + i)

        # Check if the distance is less than or equal to the sum of their speeds
        if dist <= 2 * (n - i):
            num_collisions += 1

    # If the two cars are moving in the same direction, there won't be any collision
    if n % 2 == 0:
        return 0

    return num_collisions
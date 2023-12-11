def bouncing_balls(starting_height: int, first_bounce_height: int, num_bounces: int) -> float:
    bounciness_index = first_bounce_height // starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + (i * bounciness_index))
    return total_distance
def bouncing_balls(starting_height, first_bounce_height, num_of_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_of_bounces):
        distance = starting_height + (bounciness_index * i)
        total_distance += distance
        # Add the distance traveled during each bounce
        total_distance += distance
    return total_distance
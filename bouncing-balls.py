start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height
total_distance = start_height + (2 * bounciness_index * start_height) * num_bounces
print(total_distance)
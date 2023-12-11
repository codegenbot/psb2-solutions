start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height
total_distance = start_height + first_bounce_height

for _ in range(num_bounces - 1):
    total_distance += 2 * (bounciness_index * first_bounce_height)
    first_bounce_height *= bounciness_index

print(total_distance)
starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0

for _ in range(num_bounces):
    total_distance += starting_height + first_bounce_height
    starting_height = first_bounce_height
    first_bounce_height *= bounciness_index

total_distance -= starting_height

print(total_distance)
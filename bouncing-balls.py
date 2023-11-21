starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height

for _ in range(num_bounces - 1):
    bounce_distance = first_bounce_height * bounciness_index
    total_distance += 2 * bounce_distance
    first_bounce_height = bounce_distance * bounciness_index

print(total_distance)
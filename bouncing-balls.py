starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + 2 * first_bounce_height * bounciness_index

for _ in range(num_bounces - 1):
    total_distance += 2 * first_bounce_height * bounciness_index
    bounciness_index *= bounciness_index

print(total_distance)
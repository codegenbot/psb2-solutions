starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + (first_bounce_height * num_bounces)

for i in range(num_bounces - 1):
    total_distance += first_bounce_height * bounciness_index ** (i + 1)

print(total_distance)
starting_height=float(input())
first_bounce_height=float(input())
num_bounces=int(input())
total_distance=starting_height+first_bounce_height

for _ in range(num_bounces-1):
    bounciness_index=first_bounce_height/starting_height
    first_bounce_height*=bounciness_index
    total_distance+=2*first_bounce_height

print(total_distance)
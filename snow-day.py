hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
proportion_of_snow_melting = float(input())

for _ in range(hours):
    snow_on_ground += rate_of_snow_fall - (proportion_of_snow_melting * snow_on_ground)

print(snow_on_ground)
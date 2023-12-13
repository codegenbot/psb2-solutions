def find_leaders(vector):
    leaders = []
    max_right = vector[-1]
    leaders.append(max_right)
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= max_right:
            leaders.append(vector[i])
            max_right = vector[i]
    return leaders[::-1]
n = int(input())
vector = list(map(int, input().split()))
result = find_leaders(vector)
for leader in result:
    print(leader)
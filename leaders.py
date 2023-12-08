```python
def find_leaders(vector):
    leaders = []
    max_value = 0 
    for i in range(len(vector)-1, -1, -1):
        if vector[i] > max_value: 
            max_value = vector[i]
            leaders.append(max_value)
    return leaders[::-1]

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)
```
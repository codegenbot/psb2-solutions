```python
text = input()
target = input()

indices = []

for i in range(len(text) - len(target) + 1):
    if text[i:i+len(target)].startswith(target):
        indices.append(i)

print(' '.join(map(str, indices)))
```
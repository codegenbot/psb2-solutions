```python
text = input()
target = input()

indices = [str(i) for i in range(len(text)) if text[i:i+len(target)] == target and (text[i-len(target):i] != target or i == 0)]
print(" ".join(indices))
```
text = input()
target = input()
indices = []
for i in range(len(text) - len(target) + 1):
    if text[i:i+len(target)] == target:
        indices.append(str(i))
print(" ".join(indices))
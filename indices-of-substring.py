text = input()
target = input()
indices = [str(i) for i in range(len(text) - len(target) + 1) if target == text[i:i+len(target)]]
print(" ".join(indices))
text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text.find(target, i) >= 0]
print(" ".join(str(i) for i in indices))
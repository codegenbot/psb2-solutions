text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text.find(target, i) == i]
print(" ".join(str(i) for i in indices) if indices else "0")
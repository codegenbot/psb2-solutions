text = input()
target = input()
indices = [i for i in range(len(text)) if text[i:i+len(target)]==target or target in text[i:i+len(target)]]
print(" ".join(map(str, [i+1 for i in indices])))
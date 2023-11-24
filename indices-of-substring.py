text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)-len(target)+1) if target.lower() == text[i:i+len(target)].lower()]

if len(indices) == 0:
    print("-1")
else:
    print(" ".join(map(str, indices)))
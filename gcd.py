import math

def gcd(a, b):
    return math.gcd(a, b)

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices
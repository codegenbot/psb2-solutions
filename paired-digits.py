def paired_digits(digits):
    return sum(int(a) for i, (a, b) in enumerate(zip(digits, digits[1:]+digits[0])) if a == b or (i == len(digits)-1 and digits[0] == digits[-1]))
def paired_digits(digits):
    digits += digits[0]
    return sum(int(a) for a, b in zip(digits, digits[1:]) if a == b) + int(digits[-1] == digits[0])
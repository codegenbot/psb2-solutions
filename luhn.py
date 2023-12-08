def luhn_algorithm(digits):
    new_digits = []
    for i in range(len(digits)):
        if (len(digits) - i) % 2 == 0:
            doubled_digit = digits[i] * 2
            if doubled_digit > 9:
                doubled_digit -= 9
            new_digits.append(doubled_digit)
        else:
            new_digits.append(digits[i])
    return sum(new_digits)

n = int(input())
digits = list(map(int, input().split()))

result = luhn_algorithm(digits)
print(result)
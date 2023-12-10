def luhn_algorithm(digits):
    new_digits = []
    for i in range(len(digits)):
        if i % 2 == 1:
            new_digit = digits[i] * 2
            if new_digit > 9:
                new_digit -= 9
            new_digits.append(new_digit)
        else:
            new_digits.append(digits[i])
    return sum(new_digits)

num_digits = int(input())
digits = list(map(int, input().split()))
output = luhn_algorithm(digits)
print(output)
def sum_of_paired_digits(digits):
    total = 0
    for i in range(len(digits)-1):
        if digits[i] == digits[i+1]:
            total += int(digits[i])
    return total

digits = input()
print(sum_of_paired_digits(digits))
`def sum_product():\n    numbers = list(map(int, input().split(" ")))\n    sum_result = numbers[0]\n    product_result = numbers[0]\n    for number in numbers[1:]:\n        sum_result += number\n        product_result *= number\n    print(sum_result, product_result)`
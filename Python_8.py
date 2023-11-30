def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = 0
    product_result = 1
    for number in numbers:
        sum_result += number
        product_result *= number
    return sum_result, product_result
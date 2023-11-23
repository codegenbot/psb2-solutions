def double_the_difference(lst):
    odd_sum = sum(x ** 2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)
    return 2 * odd_sum

lst = [1, 2, 3, 4, 5]
result = double_the_difference(lst)
result

def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    sum_of_squares = 0
    for num in lst:
        if type(num) == int and num >= 0:
            if num % 2 != 0:
                sum_of_squares = sum_of_squares + num**2
            if num % 2 == 0:
                sum_of_squares = sum_of_squares + num**2 - 1
        else:
            continue

    return sum_of_squares
    pass

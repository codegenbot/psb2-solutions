
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
    if len(lst) == 0:
        return 0
    new_list = []
    new_list2 = []
    for i in lst:
        if i >= 0 and i%2 == 1:
            new_list.append(i)
        if i >= 0 and i%2 == 0:
            new_list2.append(i)
    return sum(new_list) - sum(new_list2)

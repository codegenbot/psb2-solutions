
def pluck(arr):
    """
    "Given an array representing a branch of a tree that has non-negative integer nodes
    your task is to pluck one of the nodes and return it.
    The plucked node should be the node with the smallest even value.
    If multiple nodes with the same smallest even value are found return the node that has smallest index.

    The plucked node should be returned in a list, [ smalest_value, its index ],
    If there are no even values or the given array is empty, return [].

    Example 1:
        Input: [4,2,3]
        Output: [2, 1]
        Explanation: 2 has the smallest even value, and 2 has the smallest index.

    Example 2:
        Input: [1,2,3]
        Output: [2, 1]
        Explanation: 2 has the smallest even value, and 2 has the smallest index. 

    Example 3:
        Input: []
        Output: []
    
    Example 4:
        Input: [5, 0, 3, 0, 4, 2]
        Output: [0, 1]
        Explanation: 0 is the smallest value, but  there are two zeros,
                     so we will choose the first zero, which has the smallest index.

    Constraints:
        * 1 <= nodes.length <= 10000

    current_smallest_even = 0
    smallest_even_index = 0

    for index, value in enumerate(arr):
        if value % 2 == 0:
            if current_smallest_even == 0:
                current_smallest_even = value
                smallest_even_index = index
            elif value < current_smallest_even:
                current_smallest_even = value
                smallest_even_index = index
    
    return [current_smallest_even, smallest_even_index] if current_smallest_even != 0 else []
        * 0 <= node.value
    """

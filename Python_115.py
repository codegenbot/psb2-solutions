
def max_fill(grid, capacity):
    """
    You are given a rectangular grid of wells. Each row represents a single well,
    and each 1 in a row represents a single unit of water.
    Each well has a corresponding bucket that can be used to extract water from it, 
    and all buckets have the same capacity.
    Your task is to use the buckets to empty the wells.
    Output the number of times you need to lower the buckets.

    Example 1:
        Input: 
            grid : [[0,0,1,0], [0,1,0,0], [1,1,1,1]]
            bucket_capacity : 1
        Output: 6

    Example 2:
        Input: 
            grid : [[0,0,1,1], [0,0,0,0], [1,1,1,1], [0,1,1,1]]
            bucket_capacity : 2
        Output: 5
    
    Example 3:
        Input: 
            grid : [[0,0,0], [0,0,0]]
            bucket_capacity : 5
        Output: 0

    Constraints:
        * all wells have the same length
        * 1 <= grid.length <= 10^2
        * 1 <= grid[:,1].length <= 10^2
        * grid[i][j] -> 0 | 1

    TODO: Complete the following code given the task description and function signature.
    You are free to add additional helper functions as needed.

    HINT: You can think of the problem as a flow problem.
    The wells are the nodes and the buckets are the edges.
    You can treat the buckets as having infinite capacity.
    You can also think of the problem as a graph search problem.
    The wells are the nodes and the buckets are the edges.
    You can treat the buckets as having infinite capacity.
    You can also think of the problem as a graph search problem.
    The wells are the nodes and the buckets are the edges.
    You can treat the buckets as having infinite capacity.

    NOTE: You are free to use any graph search algorithm you know.

    NOTE: You are free to use any data structure you know.

    return 0
        * 1 <= capacity <= 10^2
    """

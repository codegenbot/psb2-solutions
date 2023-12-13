[PYTHON]
def issame(grid, start, goal):
    return grid[start[0]][start[1]] == grid[goal[0]][goal[1]]

def min_path(grid, start, goal):
    # Initialize the minimum path sum
    min_sum = float('inf')
    # Initialize the queue with the starting position
    queue = [start]
    # Loop until the queue is empty or the minimum path sum is found
    while queue and min_sum == float('inf'):
        # Get the current position from the queue
        current_position = queue.pop(0)
        # Get the value at the current position
        current_value = grid[current_position[0]][current_position[1]]
        # Check if the current position is the goal
        if issame(grid, current_position, goal):
            # If the current position is the goal, update the minimum path sum
            min_sum = current_value
        else:
            # If the current position is not the goal, add its neighbors to the queue
            for neighbor in get_neighbors(grid, current_position):
                queue.append(neighbor)
    # Return the minimum path sum
    return min_sum

def get_neighbors(grid, position):
    # Get the row and column of the current position
    row, col = position
    # Initialize an empty list to store the neighbors
    neighbors = []
    # Check if the cell to the north is valid
    if row > 0 and grid[row - 1][col] != 'X':
        # If the cell to the north is valid, add it to the list of neighbors
        neighbors.append((row - 1, col))
    # Check if the cell to the south is valid
    if row < len(grid) - 1 and grid[row + 1][col] != 'X':
        # If the cell to the south is valid, add it to the list of neighbors
        neighbors.append((row + 1, col))
    # Check if the cell to the west is valid
    if col > 0 and grid[row][col - 1] != 'X':
        # If the cell to the west is valid, add it to the list of neighbors
        neighbors.append((row, col - 1))
    # Check if the cell to the east is valid
    if col < len(grid[0]) - 1 and grid[row][col + 1] != 'X':
        # If the cell to the east is valid, add it to the list of neighbors
        neighbors.append((row, col + 1))
    return neighbors

def main():
    # Initialize the grid with the starting position
    grid = [['O', 'X', 'X', 'X', 'X'],
            ['X', 'O', 'O', 'O', 'X'],
            ['X', 'X', 'O', 'O', 'X'],
            ['X', 'O', 'X', 'O', 'X'],
            ['X', 'X', 'X', 'O', 'X']]
    # Initialize the starting position
    start = (0, 0)
    # Initialize the goal position
    goal = (3, 2)
    # Get the minimum path sum
    min_sum = min_path(grid, start, goal)
    # Print the result
    print(min_sum)

main()
[/PYTHON]
[TESTS]
# Test case 1:
def test_case_1():
    grid = [['O', 'X', 'X', 'X', 'X'],
            ['X', 'O', 'O', 'O', 'X'],
            ['X', 'X', 'O', 'O', 'X'],
            ['X', 'O', 'X', 'O', 'X'],
            ['X', 'X', 'X', 'O', 'X']]
    start = (0, 0)
    goal = (3, 2)
    assert min_path(grid, start, goal) == 11
# Test case 2:
def test_case_2():
    grid = [['O', 'X', 'X', 'X', 'X'],
            ['X', 'O', 'O', 'O', 'X'],
            ['X', 'X', 'O', 'O', 'X'],
            ['X', 'O', 'X', 'O', 'X'],
            ['X', 'X', 'X', 'O', 'X']]
    start = (0, 0)
    goal = (2, 4)
    assert min_path(grid, start, goal) == 19
# Test case 3:
def test_case_3():
    grid = [['O', 'X', 'X', 'X', 'X'],
            ['X', 'O', 'O', 'O', 'X'],
            ['X', 'X', 'O', 'O', 'X'],
            ['X', 'O', 'X', 'O', 'X'],
            ['X', 'X', 'X', 'O', 'X']]
    start = (0, 0)
    goal = (3, 2)
    assert min_path(grid, start, goal) == 11
[/TESTS]

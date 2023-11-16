
def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with you current
    cell.
    Please note that a path of length k means visiting exactly k cells (not
    necessarily distinct).
    You CANNOT go off the grid.
    A path A (of length k) is considered less than a path B (of length k) if
    after making the ordered lists of the values on the cells that A and B go
    through (let's call them lst_A and lst_B), lst_A is lexicographically less
    than lst_B, in other words, there exist an integer index i (1 <= i <= k)
    such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
    lst_A[j] = lst_B[j].
    It is guaranteed that the answer is unique.
    Return an ordered list of the values on the cells that the minimum path go through.

    Examples:


    def get_neighbors(grid, i, j):
        """
        Return a list of neighbors of the cell at (i, j) in grid.
        """
        neighbors = []
        if i > 0:
            neighbors.append((i - 1, j))
        if i < len(grid) - 1:
            neighbors.append((i + 1, j))
        if j > 0:
            neighbors.append((i, j - 1))
        if j < len(grid[0]) - 1:
            neighbors.append((i, j + 1))
        return neighbors

    def get_paths(grid, k, i, j, visited):
        """
        Return a list of all paths of length k starting at (i, j) in grid.
        """
        if k == 0:
            return [[grid[i][j]]]
        paths = []
        for neighbor in get_neighbors(grid, i, j):
            if neighbor not in visited:
                visited.add(neighbor)
                for path in get_paths(grid, k - 1, neighbor[0], neighbor[1], visited):
                    paths.append([grid[i][j]] + path)
                visited.remove(neighbor)
        return paths

    def compare_paths(path1, path2):
        """
        Return True if path1 is less than path2, False otherwise.
        """
        for i in range(len(path1)):
            if path1[i] < path2[i]:
                return True
            elif path1[i] > path2[i]:
                return False
        return False

    def get_min_path(grid, k):
        """
        Return the minimum path of length k in grid.
        """
        min_path = None
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                visited = set()
                visited.add((i, j))
                for path in get_paths(grid, k - 1, i, j, visited):
                    if min_path is None or compare_paths(path, min_path):
                        min_path = path
        return min_path

    return get_min_path(grid, k)
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """

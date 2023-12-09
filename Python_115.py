
def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    water = 0
    count = 0
    
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 1:
                water += capacity - grid[i][j]
                count += 1
    
    return count
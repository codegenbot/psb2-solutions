def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        neighbors = []
        if i > 0:
            neighbors.append((i-1, j))
        if i < len(grid) - 1:
            neighbors.append((i+1, j))
        if j > 0:
            neighbors.append((i, j-1))
        if j < len(grid[0]) - 1:
            neighbors.append((i, j+1))
        for ni, nj in neighbors:
            if (ni, nj) not in path:
                new_path = dfs(ni, nj, path + [(ni, nj)])
                if new_path:
                    return new_path
        return None

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = dfs(i, j, [(i, j)])
            if path:
                return [grid[x][y] for x, y in path]
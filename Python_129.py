def minPath(grid, k):
    def backtrack(i, j, path, remain, visited):
        if remain < 0:
            return None
        if remain == 0:
            return path
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if (
                0 <= ni < len(grid)
                and 0 <= nj < len(grid[0])
                and grid[ni][nj] != -1
                and (ni, nj) not in visited
            ):
                new_visited = visited.copy()
                new_visited.add((ni, nj))
                new_path = backtrack(ni, nj, path + [(ni, nj)], remain - 1, new_visited)
                if new_path:
                    return new_path
        return None

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] != -1:
                visited = set()
                path = backtrack(i, j, [(i, j)], k, visited)
                if path is not None and len(path) == k + 1:
                    return [grid[x][y] for x, y in path]
    return []
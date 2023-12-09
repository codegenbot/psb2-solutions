
def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    queue = []

    if k > n * m:
        return "Invalid input: k must be less than or equal to the number of elements in the grid"

    def findMinPath(i, j):
        if not (0 <= i < n and 0 <= j < m) or visited[i][j]:
            return float('inf')

        visited[i][j] = True
        queue.append((i, j))

        while queue:
            i, j = queue.pop(0)
            for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                ni = i + di
                nj = j + dj
                if not (0 <= ni < n and 0 <= nj < m) or visited[ni][nj]:
                    continue
                queue.append((ni, nj))
                visited[ni][nj] = True

        return sum(grid[i][j] for i in range(n) for j in range(m) if visited[i][j])

    min_path = findMinPath(0, 0)

    return min_path
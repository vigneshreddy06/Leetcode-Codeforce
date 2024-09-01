class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        if m * n != len(original):
            return []
        
        grid = [[0] * n for _ in range(m)]
        for i in range(m):
            for j in range(n):
                # get linear index
                linearIndex = i * n + j
                grid[i][j] = original[linearIndex]
        
        return grid
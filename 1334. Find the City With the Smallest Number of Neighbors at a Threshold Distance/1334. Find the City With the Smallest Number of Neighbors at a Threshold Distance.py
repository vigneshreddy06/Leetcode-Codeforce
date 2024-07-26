
class Solution:
    def findTheCity(self, n: int, edges: List[List[int]], distanceThreshold: int) -> int:
    
        matrix = [[10001 for _ in range(n)] for _ in range(n)]
        for a, b, w in edges:
            matrix[a][b] = w
            matrix[b][a] = w
        for k in range(n):
            for i in range(n):
                for j in range(n):
                    matrix[i][j] = min(matrix[i][j],
                                    matrix[i][k] + matrix[k][j]
                                    )
        ans = 0
        minN = n
        for i in range(n):
            c = 0
            for j in range(n):
                if i==j: continue
                if(matrix[i][j] <= distanceThreshold):
                    c+=1
            if c<=minN:
                minN=c
                ans=i
        return ans
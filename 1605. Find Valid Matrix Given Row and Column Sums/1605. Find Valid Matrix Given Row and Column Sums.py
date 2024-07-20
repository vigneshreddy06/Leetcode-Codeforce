class Solution:
    def restoreMatrix(self, rowSum: List[int], colSum: List[int]) -> List[List[int]]:
        m = len(rowSum)
        n = len(colSum)

        result = [[0 for j in range(n)] for i in range(m)]

        i = j = 0

        while ( i < m and j < n ):
            result[i][j] = min(rowSum[i],colSum[j])

            rowSum[i] -= result[i][j]
            colSum[j] -= result[i][j]

            if rowSum[i]== 0:
                i+=1

            if colSum[j]==0:
                j+=1

        return result 
class Solution:

  def minimumCost(self, source: str, target: str, original: List[str], changed: List[str], cost: List[int]) -> int:
    C = [[float('inf')] * 26 for _ in range(26)]
    for c1, c2, c in zip(original, changed, cost):
      c1, c2 = ord(c1) - 97, ord(c2) - 97
      C[c1][c2] = min(C[c1][c2], c)
    
    for k in range(26):
      for i in range(26):
        for j in range(26):
          C[i][j] = min(C[i][j], C[i][k]+ C[k][j])

    res = sum(C[ord(c1) - 97][ord(c2) - 97] for c1, c2 in zip(source, target) if c1 != c2)
    return res if res != float('inf') else -1
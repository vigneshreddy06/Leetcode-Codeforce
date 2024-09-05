class Solution:
    def missingRolls(self, a: List[int], q: int, n: int) -> List[int]:
        return next((w for w in combinations_with_replacement(range(1,7),n) if sum(w)==p),[p:=q*(n+len(a))-sum(a)]*0)
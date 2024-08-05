class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        ans = []
        lib = {}
        for i in arr :
            if i  in lib :
                lib[i] += 1
            else :
                lib[i] = 1
        print(lib)
        
        for s in arr :
            if lib[s] == 1 :
                ans.append(s)
        
        return ans[k - 1] if k <= len(ans) else ""
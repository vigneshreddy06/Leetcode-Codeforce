class SegmentTree:

    def __init__(self,L,R,total):
        self.total = total
        self.L=L
        self.R=R
        self.left=None
        self.right=None

    @staticmethod
    def build(nums,L,R):
        if L==R:
            return SegmentTree(L,R,nums[R])
        
        M = (L+R)//2
        root = SegmentTree(L,R,0)
        root.left = SegmentTree.build(nums,L,M)
        root.right = SegmentTree.build(nums,M+1,R)
        root.total = root.left.total +root.right.total
        return root
    
    def update(self,index,val):
        if self.L == self.R:
            self.total = val
            return 
        M = (self.L + self.R)//2
        if index<=M:
            self.left.update(index,val)
        else:
            self.right.update(index,val)
        self.total = self.left.total +self.right.total

    def queryRange(self,L,R):
        if L== self.L and self.R==R:
            return self.total
        M = (self.L + self.R) // 2
        if L > M:
            return self.right.queryRange(L, R)
        elif R <= M:
            return self.left.queryRange(L, R)
        else:
            return (self.left.queryRange(L, M) +
                    self.right.queryRange(M + 1, R))



class NumArray:

    def __init__(self, nums: List[int]):
      self.segement = SegmentTree.build(nums,0,len(nums)-1)
        

    def update(self, index: int, val: int) -> None:
        self.segement.update(index,val)

    def sumRange(self, left: int, right: int) -> int:
        return self.segement.queryRange(left,right)


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# obj.update(index,val)
# param_2 = obj.sumRange(left,right)
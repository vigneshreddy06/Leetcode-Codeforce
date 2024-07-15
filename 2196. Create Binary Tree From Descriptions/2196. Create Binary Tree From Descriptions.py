class Solution:
    def createBinaryTree(self, a: List[List[int]]) -> Optional[TreeNode]:
        return (d:={},q:={setattr(d.setdefault(p,TreeNode(p)),('right','left')[l],d.setdefault(c,TreeNode(c))) or c for p,c,l in a})[0][({*d}-q).pop()]
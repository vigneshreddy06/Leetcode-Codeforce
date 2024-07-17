class Solution:
    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        to_delete_set = set(to_delete)
        remaining_trees = []

        def helper(node, is_root):
            if not node:
                return None
            should_delete = node.val in to_delete_set
            node.left = helper(node.left, should_delete)
            node.right = helper(node.right, should_delete)
            if not should_delete and is_root:
                remaining_trees.append(node)
            return None if should_delete else node
        
        helper(root, True)
        return remaining_trees
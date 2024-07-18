/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countPairs(TreeNode* root, int distance) {
        int count = 0;
        dfs(root, distance, count);

        return count;
    }
    vector<int> dfs(TreeNode *root, int distance, int &count) {
        if(root == NULL) return {};
        if(root->left == NULL && root->right == NULL) return {1};

        vector<int> leftDistance = dfs(root->left, distance, count);
        vector<int> rightDistance = dfs(root->right, distance, count);

        for(auto l : leftDistance) {
            for(auto r : rightDistance) {
                if(l + r <= distance) count++;
            }
        }

        vector<int> currDistance;
        for(auto l : leftDistance) {
            if(l + 1 <= distance) currDistance.push_back(l + 1);
        }

        for(auto r : rightDistance) {
            if(r + 1 <= distance) currDistance.push_back(r + 1);
        }

        return currDistance;
    }
};
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;

        bool ans = false;
        int sum = 0;

        PathSum(root, targetSum, sum, ans);
        
        return ans;
    }
    void PathSum(TreeNode* root, int target, int &sum, bool &ans) {
        if (!root) return;
        else sum += root->val;

        if (!root->left && !root->right && sum == target) ans = true;

        PathSum(root->left, target, sum, ans);
        PathSum(root->right, target, sum, ans);
        sum -= root->val;
    }
};

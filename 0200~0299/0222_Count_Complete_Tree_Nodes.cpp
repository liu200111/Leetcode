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
    int countNodes(TreeNode* root) {
        int ans = 0;
        sumNodes(root, ans);
        return ans;
    }
    void sumNodes(TreeNode* root, int &ans) {
        if (!root) return;

        ans++;
        sumNodes(root->left, ans);
        sumNodes(root->right, ans);
    }
};

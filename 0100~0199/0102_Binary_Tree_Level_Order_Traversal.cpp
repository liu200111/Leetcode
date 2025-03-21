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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> ans(maxDepth(root));
        int level = 0;

        orderTraversal(root, ans, level);
        return ans;
    }
    // Processing order
    void orderTraversal(TreeNode* root, vector<vector<int>> &ans, int &level) {
        if (!root) return;
        else level++;

        ans[level-1].push_back(root->val);
        printf("%d\n", level);

        orderTraversal(root->left, ans, level);
        orderTraversal(root->right, ans, level);
        level--;
    }
    // Determine the length of the vector
    int maxDepth(TreeNode* root) {
        if (!root) return 0;

        int left = maxDepth(root -> left);
        int right = maxDepth(root -> right);

        if ( left > right ) return left + 1;
        else return right + 1;   
    }
};

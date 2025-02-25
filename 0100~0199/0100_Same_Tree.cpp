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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> p_, q_;
        traversal_pre(p, p_);
        traversal_pre(q, q_);
        if (p_ == q_ ) return true;
        else return false;
    }
    
    void traversal_pre(TreeNode* root, vector<int> &ans) {
        if (!root) {
            ans.push_back(-10001);
            return;
        }
        ans.push_back(root->val);
        traversal_pre(root->left, ans);
        traversal_pre(root->right, ans);
    }
};

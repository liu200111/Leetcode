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
    bool isSymmetric(TreeNode* root) {
        vector<int> left;
        vector<int> right;
        traversal_pre_left(root -> left,  left);
        traversal_pre_right(root -> right,  right);
        if (left == right) return true;
        else return false;
    }
    // recursive
    void traversal_pre_left(TreeNode* root, vector<int>& ans) { // &ans: call by reference
        if(!root) {
            ans.push_back(-1);
            return;
        }
        ans.push_back(root -> val);
        traversal_pre_left(root -> left, ans);
        traversal_pre_left(root -> right, ans);
    }
    void traversal_pre_right(TreeNode* root, vector<int>& ans) { // &ans: call by reference
        if(!root) {
            ans.push_back(-1);
            return;
        }
        ans.push_back(root -> val);
        traversal_pre_right(root -> right, ans);
        traversal_pre_right(root -> left, ans);
    }
};

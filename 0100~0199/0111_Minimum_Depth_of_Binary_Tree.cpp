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
    int minDepth(TreeNode* root) {
        if (!root) return 0;

        int left = minDepth(root -> left);
        int right = minDepth(root -> right);

        if ( left > right ) return right == 0 ? left + 1 : right + 1;    // check whether the right node is empty
        else return left == 0 ? right + 1 : left + 1;    // check whether the left node is empty
    }
};

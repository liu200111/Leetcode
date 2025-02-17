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
    bool isBalanced(TreeNode* root) {
        if ( !root ) return true;
        // else if ( !root -> left ) {
        //     if ( maxDepth(root -> right) > 1 )  return false;
        //     else return true;
        // }
        // else if ( !root -> right ) {
        //     if ( maxDepth(root -> left) > 1 )  return false;
        //     else return true;
        // }

        if ( maxDepth(root -> left) - maxDepth(root -> right) > 1 || maxDepth(root -> left) - maxDepth(root -> right) < -1 ) return false;
        else return isBalanced(root -> left) && isBalanced(root -> right);  // If any of the subtrees is unbalanced, isBalanced() will return false, which will cause the top layer to also return false.
    
    }
    int maxDepth(TreeNode* root) {
        if ( !root ) return 0;

        int left = maxDepth(root -> left);
        int right = maxDepth(root -> right);

        if ( left > right ) return left + 1;
        else return right + 1;
    }
};

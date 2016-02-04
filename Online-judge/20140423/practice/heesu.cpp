/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int LVR(TreeNode *node) {
        if(!node) return 0;
        int left = LVR(node->left);
        int right = LVR(node->right);
        return 1+ ((left > right) ? left : right);
    }
    int maxDepth(TreeNode *root) {
        return LVR(root);
    }
    
};

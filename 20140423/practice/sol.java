/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public int maxDepth(TreeNode root) {
        if (root == null)
            return 0;
        int n1 = maxDepth(root.left);
        int n2 = maxDepth(root.right);
        if (n1 > n2)
            return 1 + n1;
        else
            return 1 + n2;
    }
}

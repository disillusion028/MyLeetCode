/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/binary-tree-paths
@Language: Java
@Datetime: 16-11-23 07:47
*/

/**
 * Definition of TreeNode:
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left, right;
 *     public TreeNode(int val) {
 *         this.val = val;
 *         this.left = this.right = null;
 *     }
 * }
 */
public class Solution {
    /**
     * @param root the root of the binary tree
     * @return all root-to-leaf paths
     */
    public List<String> binaryTreePaths(TreeNode root) {
        // Write your code here
            List<String> result = new ArrayList<String>();
            if(root==null) return result;
            String str = Integer.toString(root.val);
            findPaths(root,str,result);
            return result;
        }

        public void findPaths(TreeNode root, String str,List<String> result){
            String left= new String();
            String right = new String();
            if(root.left!=null)
            {
                left = str+"->"+Integer.toString(root.left.val);
                this.findPaths(root.left,left, result);
            }

            if(root.right!=null)
            {
                right = str+"->"+Integer.toString(root.right.val);
                this.findPaths(root.right,right,result);
            }
            if(root.right==null&&root.left==null) result.add(str);
        }
}
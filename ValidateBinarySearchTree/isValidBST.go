/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 func isValidBST(root *TreeNode) bool {
    var pri_order []int
    getPriOrderVec(root, &pri_order)
    
    for i:=0;i<len(pri_order);i++ {
        println(pri_order[i])
    }
    
    for i:=1;i<len(pri_order);i++ {
        if pri_order[i-1] >= pri_order[i]{
            return false
        }
    }
    return true
}
// go slice 参数传递的问题，需要用指针传递
func getPriOrderVec(root *TreeNode, pri_order *[]int){
    if(root == nil){
        return
    }
    getPriOrderVec(root.Left, pri_order)
    *pri_order = append(*pri_order, root.Val)
    getPriOrderVec(root.Right, pri_order)
}
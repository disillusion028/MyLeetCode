/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/delete-node-in-the-middle-of-singly-linked-list
@Language: C++
@Datetime: 16-10-13 08:12
*/

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param node: a node in the list should be deleted
     * @return: nothing
     */
    void deleteNode(ListNode *node) {
        // write your code here
        ListNode *p;
        p=node;
        //q=p->next->next;
        *p=*(node->next);
        //p->next=q;
    }
};
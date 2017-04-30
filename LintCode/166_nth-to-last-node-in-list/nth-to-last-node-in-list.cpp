/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/nth-to-last-node-in-list
@Language: C++
@Datetime: 16-11-17 09:11
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
     * @param head: The first node of linked list.
     * @param n: An integer.
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode *nthToLast(ListNode *head, int n) {
        // write your code here
        ListNode *p=head,*q=head;
        while(n--){
            p=p->next;
        }
        while(p){
            p=p->next;
            q=q->next;
        }
        return q;
    }
};



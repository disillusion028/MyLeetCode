/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/remove-nth-node-from-end-of-list
@Language: C++
@Datetime: 16-12-04 07:27
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
     * @return: The head of linked list.
     */
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // write your code here
        ListNode *Nhead=new ListNode();
        Nhead->next=head;
        Nhead->val=-1;
        ListNode *p,*q,*r;
        r=Nhead;
        q=p=head;
        while(n--){
            q=q->next;
        }
        while(q){
            r=r->next;
            p=p->next;
            q=q->next;
        }
        r->next=p->next;
        free(p);
        return Nhead->next;
    }
};



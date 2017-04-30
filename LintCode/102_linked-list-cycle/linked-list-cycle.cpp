/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/linked-list-cycle
@Language: C++
@Datetime: 16-12-14 14:37
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
     * @return: True if it has a cycle, or false
     */
    bool hasCycle(ListNode *head) {
        // write your code here
        
        if(head==NULL)return false;
        ListNode *nhead=new ListNode();
        nhead->val=-1;
        nhead->next=head;
        ListNode *p=nhead;
        ListNode *q=head;
        while(q!=NULL&&p!=NULL&&(p)!=(q)){
            p=p->next;
            if(q->next==NULL)return false;
            q=q->next->next;
        }
        if((p)==(q)&&p!=NULL)return true;
        return false;
    }
};



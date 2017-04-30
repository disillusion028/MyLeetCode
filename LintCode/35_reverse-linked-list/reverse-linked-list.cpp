/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/reverse-linked-list
@Language: C++
@Datetime: 16-12-04 08:15
*/

/**
 * Definition of ListNode
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 * 
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
     * @return: The new head of reversed linked list.
     */
    ListNode *reverse(ListNode *head) {
        // write your code here
        if(head==NULL) return NULL;
        ListNode *Ahead=new ListNode();
        Ahead->val=-1;
        Ahead->next=head;
        ListNode *p=Ahead;
        ListNode *r=head;
        ListNode *temp;
        ListNode *q=head->next;
       
        while(q){
            r->next=q->next;
            temp=p->next;
            p->next=q;
            q->next=temp;
            q=r->next;
        }
        return Ahead->next;
    }
};

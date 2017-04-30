/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/remove-duplicates-from-sorted-list
@Language: C++
@Datetime: 16-12-04 07:17
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
     * @return: head node
     */
    ListNode *deleteDuplicates(ListNode *head) {
        // write your code here
        ListNode *Nhead=new ListNode();
        Nhead->val=-1;
        Nhead->next=head;
        if(head==NULL)return NULL;
        
        ListNode *p=Nhead;
        ListNode *q=head;
        while(q->next!=NULL){
            if(q->val==q->next->val){
                p->next=q->next;
                free(q);
                q=p->next;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }
        return Nhead->next;
    }
};
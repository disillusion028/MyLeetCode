/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/remove-duplicates-from-sorted-list-ii
@Language: C++
@Datetime: 16-11-18 07:57
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
class Solution{
public:
    /**
     * @param head: The first node of linked list.
     * @return: head node
     */
    ListNode * deleteDuplicates(ListNode *head) {
        // write your code here
        //first new a blank head node
        if(head==NULL) return NULL;
        ListNode *Nhead=(ListNode*)malloc(sizeof(ListNode));
        Nhead->val=-1;
        Nhead->next=head;
        if(head->val==-1) Nhead->val=-2;
    
        ListNode *p=Nhead,*q=head;
        while(q->next!=NULL){
        while((q->next!=NULL)&&(q->val!=q->next->val)){
            p=p->next;
            q=q->next;
        }
        if(q->next==NULL) return Nhead->next;
        
       // ListNode *du=q;
        while((q->next!=NULL)&&(q->val==q->next->val)){
            q=q->next;
        }
        if(q->next==NULL) {
            p->next=NULL;
            return Nhead->next;
        }
        p->next=q->next;
        q=p->next;
        }
        return Nhead->next;
    }
};
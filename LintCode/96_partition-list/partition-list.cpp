/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/partition-list
@Language: C++
@Datetime: 16-11-20 04:11
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
     * @param x: an integer
     * @return: a ListNode 
     */
    ListNode *partition(ListNode *head, int x) {
        // write your code here
        ListNode *Nhead=(ListNode*)malloc(sizeof(ListNode));
        Nhead->val=-1;
        Nhead->next=head;
        ListNode *Mhead=(ListNode*)malloc(sizeof(ListNode));
        Mhead->val=-1;
        Mhead->next=NULL;
        
        ListNode *p=Nhead,*q=head,*t=Mhead;
  
        while(q!=NULL){
            if(q->val>=x){
                p->next=q->next;
                t->next=q;
                q->next=NULL;
                t=t->next;
                q=p->next;
              
            }
            else{
            q=q->next;
            p=p->next;
            }
        }
        p->next=Mhead->next;
        return Nhead->next;
    }
};



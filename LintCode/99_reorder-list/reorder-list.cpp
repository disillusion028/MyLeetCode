/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/reorder-list
@Language: C++
@Datetime: 17-02-07 06:54
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
     * @return: void
     */
    ListNode *reverse(ListNode *head) {
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
    void reorderList(ListNode *head) {
        // write your code here
        int count =0;
        ListNode *h1=head;
        while(h1){
            count+=1;
            h1=h1->next;
        }
        h1=head;
        if(count<=2)return ;
        int tophalf;
        if(count%2==0)tophalf=count/2;
        else tophalf=(count+1)/2;
        
        ListNode *t1=head,*h2=head,*p,*q=head;
        while(--tophalf)
        {
            t1=t1->next;
        }
        h2=t1->next;
        t1->next=NULL;
        
        p=reverse(h2);
        h2=p;
        while(p!=NULL&&q!=NULL){
//same as   while(p!=NULL)
            q=h1->next;
            h1->next=h2;
            p=h2->next;
            h2->next=q;
            h1=q;
            h2=p;
        }
        return;
    }
};



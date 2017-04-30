/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/rotate-list
@Language: C++
@Datetime: 16-12-14 11:43
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param head: the list
     * @param k: rotate to the right k places
     * @return: the list after rotation
     */
    ListNode *rotateRight(ListNode *head, int k) {
        // write your code here
        if(head==NULL)return head;
        if(k==0)return head;
        ListNode *Nhead=new ListNode();
        int temp=0;
        ListNode *s=head;

        while(s!=NULL){
            temp++;
            s=s->next;
        }
        if(temp==1)return head;
        Nhead->val=-1;
        Nhead->next=head;
        ListNode *p=Nhead;
        ListNode *q=head;
        if(k>=temp){
            int temp2=k%temp;
            if(temp2==0)return head;
            k=temp-temp2;
        }
        else{
            k=temp-k;
        }
        while(k--){
            p=p->next;
            q=q->next;
        }
        ListNode *r1=p;
        while(r1->next){
            r1=r1->next;
        }
        p->next=NULL;
        r1->next=Nhead->next;
        return q;
    }
};
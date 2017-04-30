/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/swap-nodes-in-pairs
@Language: C++
@Datetime: 16-11-18 08:48
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
     * @param head a ListNode
     * @return a ListNode
     */
    ListNode* swapPairs(ListNode* head) {
        // Write your code here
        //first, make a new head for this list
        ListNode* Nhead=(ListNode*)malloc(sizeof(ListNode));
        Nhead->val=-1;
        Nhead->next=head;
        
        ListNode*p=Nhead,*q=head;
        if(head==NULL) return NULL;
        while(q->next!=NULL){
        ListNode *t=q->next;
        p->next=t;
        q->next=t->next;
        t->next=q;
        if(q->next==NULL)return Nhead->next;
        p=q;
        q=q->next;
        }
        return Nhead->next;
    }
};
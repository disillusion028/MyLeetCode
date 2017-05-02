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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode *nhead=new ListNode(-1);
        nhead->next=head;
        ListNode *p=nhead,*q=nhead->next;
        int flag=0;
        while(q->next!=NULL){
            while(q->val==q->next->val){
                flag=1;
                q=q->next;
                if(q->next==NULL){p->next=NULL;return nhead->next;}
            }
            if(flag==1){
            q=q->next;
            p->next=q;
            //p=p->next;
            flag=0;
            }else{
                p=p->next;
                q=q->next;
            }
        }
        return nhead->next;
    }
};

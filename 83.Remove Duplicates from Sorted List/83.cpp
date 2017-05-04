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
        ListNode *p=head,*q=head->next;
        while(p!=NULL){
            if(q==NULL)break;
            while(p->val==q->val){
                q=q->next;
                if(q==NULL)break;
            }
            p->next=q;
            p=p->next;
            if(p==NULL)break;
            q=p->next;
        }
        return head;
    }
};

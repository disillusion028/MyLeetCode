/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/remove-linked-list-elements
@Language: C++
@Datetime: 16-09-19 14:19
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
     * @param val an integer
     * @return a ListNode
     */
    ListNode *removeElements(ListNode *head, int val) {
        // Write your code here
        if(head==NULL)return head;
        ListNode *h;
       // h=(ListNode*)malloc(sizeof(ListNode));
        //h->val=0;
        h->next=head;
        head=h;
        while (head->next != NULL) {
            if (head->next->val == val) {
                head->next = head->next->next;
            } else {
                head = head->next;
            }
        }
        
        return h->next;
       
    }
};
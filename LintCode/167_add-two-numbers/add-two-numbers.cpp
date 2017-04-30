/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/add-two-numbers
@Language: C++
@Datetime: 16-09-23 09:15
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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode *addLists(ListNode *l1, ListNode *l2) {
        // write your code here
        	int temp=0;
	ListNode *head,*r,*s;
	head= (ListNode*)malloc(sizeof(ListNode));
	r = head;
	
	while (l1&&l2) {
		s = (ListNode*)malloc(sizeof(ListNode));
		s->val = (l1->val + l2->val+temp) % 10;
		temp = (l1->val + l2->val+temp) / 10;
		r->next=s;
		r = s;
		r->next = NULL;
		l1 = l1->next;
		l2 = l2->next;
	}
	while (l1) {
		s= (ListNode*)malloc(sizeof(ListNode));
		s->val = (l1->val + temp) % 10;
		temp = (l1->val + temp) / 10;
		r->next = s;
		r = s;
		r->next = NULL;
		l1 = l1->next;
	}
	while (l2)
	{
		s = (ListNode*)malloc(sizeof(ListNode));
		s->val = (l2->val + temp) % 10;
		temp = (l2->val + temp) / 10;
		r->next = s;
		r = s;
		r->next = NULL;
		l2 = l2->next;
	}
	if (temp == 1) {
		s = (ListNode*)malloc(sizeof(ListNode));
		s->val = 1;
		r->next = s;
		r = s;
		r->next = NULL;
	}
	else if (temp == 0) {
		//cout << "yes" << endl;
	}
	return head->next;
    }
};
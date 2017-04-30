/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/merge-two-sorted-lists
@Language: C++
@Datetime: 17-02-12 07:51
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
     * @param ListNode l1 is the head of the linked list
     * @param ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // write your code here
        ListNode* result = NULL;

	/* Base cases */
	    if(l1 == NULL)
		    return (l2);
	    else if(l2 == NULL)
		    return (l1);

	/* Pick either a or b recur */
	    if(l1->val <= l2->val){
		    result = l1;
		    result->next = mergeTwoLists(l1->next, l2);
	}
	    else{
		    result = l2;
		    result->next = mergeTwoLists(l1, l2->next);	
	}
	    return (result);
    }
};
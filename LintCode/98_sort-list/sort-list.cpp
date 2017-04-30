/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/sort-list
@Language: C++
@Datetime: 17-02-12 07:53
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
     * @return: You should return the head of the sorted linked list,
                    using constant space complexity.
     */
    
    ListNode *sortList(ListNode *head) {
        // write your code here
        if(head==NULL)return NULL;
        ListNode **headref=&head;
        MergeSort(headref);
        return head;
}
    void MergeSort(ListNode** headRef){
        ListNode* head = *headRef;
        ListNode* a;
        ListNode* b;

    /* Base case -- length 0 or 1 */
        if ((head == NULL) || (head->next == NULL))
        {
            return;
        }

    /* Split head into 'a' and 'b' sublists */
        FrontBackSplit(head, &a, &b);

    /* Recursively sort the sublists */
        MergeSort(&a);
        MergeSort(&b);

    /* answer = merge the two sorted lists together */
        *headRef = SortedMerge(a, b);
}

    ListNode* SortedMerge(ListNode* l1, ListNode* l2){
	   ListNode *head,*p,*t;
        head=(ListNode*)malloc(sizeof(ListNode));
        p=head;
        while(l1&&l2){
            if(l1->val<l2->val){
                p->next=l1;
                l1=l1->next;
                p=p->next;
            }
            else{
                p->next=l2;
                l2=l2->next;
                p=p->next;
            }
        }
        if(l1)p->next=l1;
        if(l2)p->next=l2;
        return head->next;
}
    void FrontBackSplit(ListNode* source, ListNode** frontRef, ListNode** backRef)
{
	ListNode* fast;
	ListNode* slow;

	if(source == NULL || source->next == NULL)
	{
		*frontRef = source;
		*backRef = NULL;
	}
	else
	{
		slow = source;
		fast = source->next;

		/* Advance 'fast' two nodes, and advance 'slow' one node */	
		while(fast != NULL)
		{
			fast = fast->next;
			if( fast != NULL )
			{
				slow = slow->next;
				fast = fast->next;
			}
		}

		*frontRef = source;
		*backRef = slow->next;
		slow->next = NULL;
	}
}

};


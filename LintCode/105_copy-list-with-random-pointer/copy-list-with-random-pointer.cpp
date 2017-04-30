/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/copy-list-with-random-pointer
@Language: C++
@Datetime: 17-02-07 05:50
*/

/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param head: The head of linked list with a random pointer.
     * @return: A new head of a deep copy of the list.
     */
    RandomListNode *copyRandomList(RandomListNode *head) {
        // write your code here
        if(head==NULL)return NULL;
        //first travel
        RandomListNode *h1=head;
        while(h1!=NULL){
            RandomListNode *p=new RandomListNode(h1->label);
            p->next=h1->next;
            h1->next=p;
            h1=p->next;
        }
        //second travel
        h1=head;
        while(h1!=NULL){
            if(h1->random!=NULL){
                h1->next->random=h1->random->next;
                h1=h1->next->next;
            }
            else {
                h1->next->random=NULL;
                h1=h1->next->next;
            }
        }
        //third travel
        h1=head->next;
        while(h1->next!=NULL){
            h1->next=h1->next->next;
            h1=h1->next;
        }
        return head->next;
    }
};
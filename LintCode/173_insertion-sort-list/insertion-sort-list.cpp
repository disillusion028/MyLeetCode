/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/insertion-sort-list
@Language: C++
@Datetime: 17-01-11 02:42
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
     * @return: The head of linked list.
     */
    ListNode *insertionSortList(ListNode *head) {
        // write your code here
        ListNode *newHead = NULL, *toInsert = head;
    while (toInsert != NULL) {
        ListNode *current = newHead, *last = NULL, *next = toInsert->next;
        // 从头往后找到第一个大于toInsert->value的元素
        while (current != NULL && current->val <= toInsert->val) {
            last = current;
            current = current->next;
        }

        if (last == NULL) {
            // 如果比任何已排序的数字都要小，那么就成为新的头部
            toInsert->next = newHead;
            newHead = toInsert;
        } else {
            // 否则插入到last的后面
            toInsert->next = last->next;
            last->next = toInsert;
        }

        toInsert = next;
    }
    return newHead;
        
    }
};
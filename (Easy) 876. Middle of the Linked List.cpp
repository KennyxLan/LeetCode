/*
(Easy) 876. Middle of the Linked List.cpp

12/29/2020 13:42
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
Memory Usage: 6.9 MB, less than 100.00% of C++ online submissions for Middle of the Linked List.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *mid = head;
        ListNode *tail = head;
        bool moveMid = false;
        while(tail != nullptr){
            if(moveMid)
                mid = mid->next;
            moveMid = !moveMid;
            tail = tail->next;
        }
        return mid;
    }
};

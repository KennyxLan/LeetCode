/*
(Easy) 83. Remove Duplicates from Sorted List.cpp

12/29/2020 12:11
(iteratively)
Runtime: 8 ms, faster than 98.56% of C++ online submissions for Remove Duplicates from Sorted List.
Memory Usage: 11.9 MB, less than 99.78% of C++ online submissions for Remove Duplicates from Sorted List.
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* currentPtr = head;
        ListNode* nextPtr = nullptr;
        while(currentPtr != nullptr){
            int x = currentPtr->val; // or repeatedly call currentPtr->val in the inner loop test condition
            nextPtr = currentPtr->next;
            while(nextPtr != nullptr && nextPtr->val == x){
                nextPtr = nextPtr->next;
            }
            currentPtr->next = nextPtr;
            currentPtr = nextPtr;
        }
        return head;
    }
};

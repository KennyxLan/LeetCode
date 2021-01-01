/*
(Easy) 234. Palindrome Linked List.cpp

01/01/2021 21:20
Runtime: 12 ms, faster than 99.95% of C++ online submissions for Palindrome Linked List.
Memory Usage: 14 MB, less than 97.36% of C++ online submissions for Palindrome Linked List.

01/01/2021 21:22
Runtime: 16 ms, faster than 99.25% of C++ online submissions for Palindrome Linked List.
Memory Usage: 13.9 MB, less than 99.46% of C++ online submissions for Palindrome Linked List.
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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr)
            return true;
        ListNode *mid = head;
        ListNode *midNext = head->next;
        ListNode *rightHead = head->next;
        mid->next = nullptr;
        bool moveMid = false;
        while(rightHead != nullptr){
            if(moveMid){
                ListNode *temp = mid;
                mid = midNext;
                midNext = midNext->next;
                mid->next = temp;
            }
            moveMid = !moveMid;
            rightHead = rightHead->next;
        }
        if(!moveMid){ // if odd # of nodes, moveMid == false
            mid = mid->next;
        }
        rightHead = midNext;
        while(mid != nullptr){
            if(mid->val != rightHead->val)
                return false;
            mid = mid->next;
            rightHead = rightHead->next;
        }
        return true;
    }
};

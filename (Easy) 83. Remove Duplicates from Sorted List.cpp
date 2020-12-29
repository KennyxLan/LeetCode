/*
(Easy) 83. Remove Duplicates from Sorted List.cpp

12/29/2020 12:11
(iterative)
Runtime: 8 ms, faster than 98.56% of C++ online submissions for Remove Duplicates from Sorted List.
Memory Usage: 11.9 MB, less than 99.78% of C++ online submissions for Remove Duplicates from Sorted List.

12/29/2020 13:02
(recursive)
Runtime: 8 ms, faster than 98.56% of C++ online submissions for Remove Duplicates from Sorted List.
Memory Usage: 11.8 MB, less than 99.78% of C++ online submissions for Remove Duplicates from Sorted List.
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
    ListNode* deleteDuplicates(ListNode* head) { // recursive
        return recursive(head, head);
    }
    
    ListNode* recursive(ListNode* h, ListNode* currentPtr){
        if(currentPtr == nullptr || currentPtr->next == nullptr)
            return h;
        else if(currentPtr->val == (currentPtr->next)->val){
            currentPtr->next = (currentPtr->next)->next;
            return recursive(h, currentPtr);
        }else
            return recursive(h, currentPtr->next);
    }
};
    
//    ListNode* deleteDuplicates(ListNode* head) {  // iterative
//        ListNode* currentPtr = head;
//        ListNode* nextPtr = nullptr;
//        //int x;
//        while(currentPtr != nullptr){
//            int x = currentPtr->val;
//            nextPtr = currentPtr->next;
//            while(nextPtr != nullptr && nextPtr->val == x){
//                nextPtr = nextPtr->next;
//            }
//            currentPtr->next = nextPtr;
//            currentPtr = nextPtr;
//        }
//        return head;
//    }

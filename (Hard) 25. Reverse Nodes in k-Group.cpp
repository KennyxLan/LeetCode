/*
(Hard) 25. Reverse Nodes in k-Group.cpp
Runtime: 16 ms, faster than 96.30% of C++ online submissions for Reverse Nodes in k-Group.
Memory Usage: 11.9 MB, less than 70.30% of C++ online submissions for Reverse Nodes in k-Group.
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* virtualHeadPtr = new ListNode(0, head);
        ListNode* countPtr = virtualHeadPtr;
        ListNode* beforeKPtr = virtualHeadPtr;
        while(countPtr->next != nullptr){
            countPtr = countPtr->next;
            count = count + 1;
            if(count == k){
                ListNode* tmp = beforeKPtr->next;
                reverse(beforeKPtr, countPtr->next);
                beforeKPtr = tmp;
                countPtr = tmp;
                count = 0;
            }
        }
        //return virtualHeadPtr->next;
        head = virtualHeadPtr->next;
        //delete virtualHeadPtr;
        return head;
    }
    
    void reverse(ListNode* beforeKPtr, ListNode* afterKPtr){
        ListNode* realBeforeKPtr = beforeKPtr;
        ListNode* rightHeadPtr = beforeKPtr->next->next;
        beforeKPtr->next->next = afterKPtr;
        beforeKPtr = beforeKPtr->next;
        while(rightHeadPtr != afterKPtr){
            ListNode* tempPtr = rightHeadPtr->next;
            rightHeadPtr->next = beforeKPtr;
            beforeKPtr = rightHeadPtr;
            rightHeadPtr = tempPtr;
        }
        realBeforeKPtr->next = beforeKPtr;
    }
};

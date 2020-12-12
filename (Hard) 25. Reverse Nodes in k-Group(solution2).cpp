/*
(Hard) 25. Reverse Nodes in k-Group(solution2).cpp
Runtime: 16 ms, faster than 96.42% of C++ online submissions for Reverse Nodes in k-Group.
Memory Usage: 11.9 MB, less than 77.62% of C++ online submissions for Reverse Nodes in k-Group.
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
        ListNode* currentPtr = head;
        ListNode** beforeKPtrPtr = &head;
        int count = 0;
        while(currentPtr != nullptr){
            count = count + 1;
            if(count == k){
                currentPtr = (*beforeKPtrPtr);
                reverse(beforeKPtrPtr, k);
                beforeKPtrPtr = &(currentPtr->next);
                count = 0;
            }
            currentPtr = currentPtr->next;
        }
        return head;
    }
    
    void reverse(ListNode** beforePtrPtr, int k){
        ListNode* currPtr = *beforePtrPtr;
        ListNode* nextPtr = currPtr->next;
        ListNode* originalKFirstPtr = *beforePtrPtr;
        int cnt = 1;
        while(cnt < k){
            ListNode* tmp = nextPtr->next;
            nextPtr->next = currPtr;
            currPtr = nextPtr;
            nextPtr = tmp;
            cnt = cnt + 1;
        }
        *beforePtrPtr = currPtr;
        originalKFirstPtr->next = nextPtr;
    }
};

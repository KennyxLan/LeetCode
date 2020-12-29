/*
(Easy) 160. Intersection of Two Linked Lists.cpp
12/29/2020 21:43
Runtime: 36 ms, faster than 95.01% of C++ online submissions for Intersection of Two Linked Lists.
Memory Usage: 14.7 MB, less than 85.32% of C++ online submissions for Intersection of Two Linked Lists.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *hA = headA, *hB = headB;
        int countA = 0, countB = 0;
        while(hA != nullptr){
            countA = countA + 1;
            hA = hA->next;
        }
        while(hB != nullptr){
            countB = countB + 1;
            hB = hB->next;
        }
        if(countA == 0 || countB == 0)
            return nullptr;
        else if(countA >= countB){
            hA = headA;
            hB = headB;
            countA = countA - countB;
        }else{
            hA = headB;
            hB = headA;
            countA = countB - countA;
        }
        for(int i{0}; i < countA; i++)
            hA = hA->next;
        while(hA != hB){
            hA = hA->next;
            hB = hB->next;
        }
        return hA;
    }
};

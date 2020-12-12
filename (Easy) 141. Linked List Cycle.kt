/*
(Easy) 141. Linked List Cycle.kt
Runtime: 160 ms, faster than 98.50% of Kotlin online submissions for Linked List Cycle.
Memory Usage: 35.6 MB, less than 40.00% of Kotlin online submissions for Linked List Cycle.
*/

/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class Solution {
    fun hasCycle(head: ListNode?): Boolean {
        var slow: ListNode? = head
        var fast: ListNode? = head?.next
        while(fast != null){
            if(fast == slow)
                return true
            slow = slow?.next
            fast = fast?.next?.next
        }
        return false
    }
}





//class Solution {
//    fun hasCycle(head: ListNode?): Boolean {
//        var current: ListNode? = head
//        while(current != null && current?.`val` != 200000){
//            current?.`val` = 200000
//            current = current?.next
//        }
//        if(current == null)
//            return false
//        return true
//    }
//}

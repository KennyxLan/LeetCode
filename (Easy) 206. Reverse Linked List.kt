/*
(Easy) 206. Reverse Linked List.kt
Runtime: 148 ms, faster than 98.40% of Kotlin online submissions for Reverse Linked List.
Memory Usage: 35.9 MB, less than 32.37% of Kotlin online submissions for Reverse Linked List.
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
    fun reverseList(head: ListNode?): ListNode? { // recursively
        if(head == null)
            return null
        if(head?.next == null)
            return head
        val ans: ListNode? = reverseList(head?.next)
        (head?.next)?.next = head
        head?.next = null
        return ans
    }

    
//    fun reverseList(head: ListNode?): ListNode? { // recursively
//        return recursive(head, null)
//    }
//    
//    fun recursive(current: ListNode?, left: ListNode?): ListNode?{
//        if(current != null){
//            var temp: ListNode? = current?.next
//            current?.next = left
//            if(temp != null){
//                return recursive(temp, current)
//            }else if(temp == null){
//                return current
//            }
//        }
//        return null
//    }
    
    
    
//    fun reverseList(head: ListNode?): ListNode? { // iteratively
//        var leftHead: ListNode? = null
//        var rightHead: ListNode? = head
//        while(rightHead != null){
//            var tempNode: ListNode? = rightHead.next
//            rightHead.next = leftHead
//            leftHead = rightHead
//            rightHead = tempNode
//        }
//        return leftHead
//    }
}

/*
(Easy) 237. Delete Node in a Linked List.kt
Runtime: 144 ms, faster than 100.00% of Kotlin online submissions for Delete Node in a Linked List.
Memory Usage: 34.9 MB, less than 15.25% of Kotlin online submissions for Delete Node in a Linked List.
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
    fun deleteNode(node: ListNode?) {
        node?.`val` = node?.next?.`val`
        node?.next = node?.next?.next
        return
    }
}

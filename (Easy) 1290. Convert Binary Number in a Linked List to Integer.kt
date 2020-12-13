/*
(Easy) 1290. Convert Binary Number in a Linked List to Integer.kt
Your runtime beats 89.87 % of kotlin submissions.
Your memory usage beats 16.03 % of kotlin submissions.
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
    fun getDecimalValue(head: ListNode?): Int {
  //      if(head == null){
  //          println(">>> The linked list is null! <<<")
  //      }
        var ans: Int = 0
        var currentNode: ListNode? = head
        while(currentNode != null){
            ans = ans * 2
            if(currentNode?.`val` == 1)
                ans = ans + 1
            currentNode = currentNode?.next
        }
        return ans
    }
}

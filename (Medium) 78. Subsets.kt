/*
(Medium) 78. Subsets.kt
Runtime: 160 ms, faster than 98.74% of Kotlin online submissions for Subsets.
Memory Usage: 35.4 MB, less than 77.36% of Kotlin online submissions for Subsets.
*/

class Solution {
    fun subsets(nums: IntArray): List<List<Int>> {
        var answerList = MutableList(1, {MutableList(0, {0})})
        //answerList.add(MutableList(0, {0}))
        for(i in 0 until nums.size){
            for(j in 0 until answerList.size){
                
                var temp = MutableList(0, {0})
                for(k in 0 until answerList[j].size){
                    temp.add(answerList[j][k])
                }
                temp.add(nums[i])
                answerList.add(temp)
                
               // var temp= answerList[j].toMutableList()
               // temp.add(nums[i])
               // answerList.add(temp)
            }
        }
        return answerList
        
    }
}

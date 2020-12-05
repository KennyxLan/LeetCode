/*
(Medium) 59. Spiral Matrix II.kt
Your runtime beats 100.00 % of kotlin submissions.
Your memory usage beats 57.78 % of kotlin submissions.
*/


class Solution {
    fun generateMatrix(n: Int): Array<IntArray> {
        var matrix = Array(n, {IntArray(n){i -> -1}})
        var lBound = 0
        var rBound = n - 1
        var uBound = 0
        var dBound = n - 1
        var count = 1
        var direction = 0
        var i = 0
        var j = 0
        while(count <= n*n){
            matrix[i][j] = count
            count = count + 1
            if(direction % 4 == 0){  // going right
                if(j + 1 <= rBound){
                    j = j + 1
                }else{
                    direction = direction + 1
                    uBound = uBound + 1
                    i = i + 1
                }
            }else if(direction % 4 == 1){ // going down
                if(i + 1 <= dBound){
                    i = i + 1
                }else{
                    direction = direction + 1
                    rBound = rBound - 1
                    j = j - 1
                }
            }else if(direction % 4 == 2){ // going left
                if(j - 1 >= lBound){
                    j = j - 1
                }else{
                    direction = direction + 1
                    dBound = dBound - 1
                    i = i - 1
                }
            }else{                      // going up
                if(i - 1 >= uBound){
                    i = i - 1
                }else{
                    direction = direction + 1
                    lBound = lBound + 1
                    j = j + 1
                }
            }
        }
        return matrix
    }
}

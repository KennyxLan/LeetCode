/*
(HARD) 903. Valid Permutations for DI Sequence.cpp
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Permutations for DI Sequence.
Memory Usage: 7.4 MB, less than 60.91% of C++ online submissions for Valid Permutations for DI Sequence.
*/

class Solution {
public:
    int numPermsDISequence(string S) {
        std::vector<int> preVector;  // previous vector ( for S[0..i-1] )
        preVector.push_back(1);
        std::vector<int> curVector;  // current vector ( for S[0..i] )
        for(int i{0}; i < S.length(); i++){
            if(S[i] == 'I'){
               int grandTempTotal = 0;
               for(int j{0}; j < i + 2; j++){
                   curVector.push_back(grandTempTotal);
                   if(j < i + 1)
                       grandTempTotal = (grandTempTotal + preVector[j]) % 1000000007;
               }
                
            }else{ // S[i] == 'D'
                int q{0};
                for(int z{0}; z < preVector.size(); z++){
                    q = (q + preVector[z]) % 1000000007;
                }
                for(int j{0}; j < i + 2; j++){
                    curVector.push_back(q);
                    if(j <= i)
                        q = (1000000007 + q - preVector[j]) % 1000000007;
                }
            }
            preVector.clear();
            preVector = curVector;
            curVector.clear();
        }
        
        int grandTotal{0};
        for(int l{0}; l < preVector.size(); l++){
            grandTotal = (grandTotal + preVector[l]) % 1000000007;
        }
        
        return grandTotal;
    }
};

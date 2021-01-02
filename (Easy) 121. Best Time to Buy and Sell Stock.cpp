/*
(Easy) 121. Best Time to Buy and Sell Stock.cpp

01/02/2021 17:40
Runtime: 4 ms, faster than 99.74% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 13.2 MB, less than 99.03% of C++ online submissions for Best Time to Buy and Sell Stock.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)
            return 0;
        
        int ans = 0;
        int min = prices[0];
        int temp = 0;
        for(int i{1}; i < prices.size(); i++){
            temp = prices[i] - min;
            if(temp > ans)
                ans = temp;
            if(prices[i] < min)
                min = prices[i];
        }
        return ans;
    }
};

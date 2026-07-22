// interview Follow-up Variants
// 2. Best Time to Buy and Sell Stock II (LeetCode 122)
// Unlimited transactions
// Cannot hold more than one stock at a time
// 1 5 3 6
// Profit = (5-1) + (6-3)
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;

        for(int i=1;i<prices.size();i++){

            if(prices[i] > prices[i-1])
                profit += prices[i]-prices[i-1];
        }

        return profit;
    }
};

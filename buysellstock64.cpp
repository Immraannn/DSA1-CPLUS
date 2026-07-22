// 1. Best Time to Buy and Sell Stock (LeetCode 121)
// Problem
// You are given an array prices, where prices[i] is the stock price on day i.
// You can:
// Buy only once
// Sell only once
// Buy before selling
// Find the maximum profit.


// brute force approach
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;

        for(int i=0;i<prices.size();i++){

            for(int j=i+1;j<prices.size();j++){

                profit = max(profit, prices[j]-prices[i]);

            }
        }

        return profit;
    }
};

optimal soln
// Optimal Approach (O(n))
// Idea
// Keep track of
// Minimum buying price till today
// Maximum profit till today
O(n)


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int price : prices){

            // Update minimum buying price
            minPrice = min(minPrice, price);

            // Profit if sold today
            int profit = price - minPrice;

            // Update answer
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};

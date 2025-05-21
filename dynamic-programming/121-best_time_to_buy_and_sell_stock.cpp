// Problem: 121. Best Time to Buy and Sell Stock
// URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Difficulty: Easy
// Date: 22 May 2025
// Tags: Array, Dynamic Programming
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0, minEle = prices[0];
        for (int i = 0; i < n; i++) {
            if (prices[i] - minEle > profit) profit = prices[i] - minEle;
            else if (minEle > prices[i]) minEle = prices[i];
        }
        return profit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxProfit = sol.maxProfit(prices);
    cout << "Maximum profit: " << maxProfit << endl;
    return 0;
}
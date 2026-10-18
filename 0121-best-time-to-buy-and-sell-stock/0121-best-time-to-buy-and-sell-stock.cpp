class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        if (n <= 1) {
            return 0;
        }

        vector<int> dp(n);

        int minPrice = prices[0];
        dp[0] = 0;

        for (int i = 1; i < n; i++) {
            minPrice = min(minPrice, prices[i]);

            int currentProfit = prices[i] - minPrice;

            dp[i] = max(dp[i - 1], currentProfit);
        }

        return dp[n - 1];
    }
};
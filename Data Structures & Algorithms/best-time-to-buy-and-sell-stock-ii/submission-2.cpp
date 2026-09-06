class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = 0;
        int ans = 0;
        for(int i = 0; i<n-1; i++) {
            if(prices[i]>=prices[i+1]) {
                continue;
            } else if(prices[i] < prices[i+1]) {
                max = prices[i+1] - prices[i];
            }
            ans += max;
        }
        return ans;
    }
};
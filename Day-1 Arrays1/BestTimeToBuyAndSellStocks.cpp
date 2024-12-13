class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int stock = INT_MAX;
        int diff = INT_MIN;

        for (int p : prices)
        {
            stock = min(stock, p);
            diff = max(diff, p - stock);
        }

        return diff;
    }
};
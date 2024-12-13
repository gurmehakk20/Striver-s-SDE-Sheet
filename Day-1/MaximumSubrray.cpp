class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = INT_MIN;
        int curr = 0;

        for (int i = 0; i < n; i++)
        {
            curr += nums[i];
            sum = max(curr, sum);
            if (curr < 0) curr = 0;
        }

        return sum;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = 1;
        int n = nums.size();

        while (i < n && j < n)
        {
            int sum = nums[i] + nums[j];
            if (sum == target) return {i, j};
            else
            {
                if (j == n-1){
                    i ++;
                    j = i + 1;
                }
                else {
                    j ++;
                }
            }
        }

        return {};
    }
};
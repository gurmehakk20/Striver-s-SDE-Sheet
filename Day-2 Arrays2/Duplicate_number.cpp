class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        for (int nu : nums)
        {
            int idx = abs(nu);

            if (nums[idx] < 0) {
                return idx;
            }

            nums[idx] = -nums[idx];
        }

        return -1;
    }
};
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;

        for (; i>= 0;)
        {
            if (nums[i] < nums[i+1])
            {
                break;
            }i--;
        }

        if (i == -1) 
        {
            sort(nums.begin(), nums.end());
            return;
        }
        int idx = i;
        for (i = n-1; i > idx; i--)
        {
            if (nums[i] > nums[idx])
            {
                swap(nums[i], nums[idx]);
                break;
            }
        }

        reverse(nums.begin() + idx + 1, nums.end());


    }
};
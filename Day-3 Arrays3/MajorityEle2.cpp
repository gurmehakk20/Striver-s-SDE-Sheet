class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int count1 = 0, count2 = 0;
        int candidate1 = 0, candidate2 = 0;
        int n = nums.size();

        for (int num : nums)
        {
            if (candidate2 != num && count1 == 0) 
            {
                candidate1 = num;
                count1 ++;
            }
            else if (candidate1 != num && count2 == 0) 
            {
                candidate2 = num;
                count2 ++;
            }
            else if (candidate1 == num)
            {
                count1++;
            }
            else if (candidate2 == num)
            {
                count2++;
            }
            else 
            {
                count1--;
                count2--;
            }
        }

        int threshold = n/3;
        vector<int> ans;
        
        count1 = 0;
        count2 = 0;
        for (int nu : nums)
        {
            if (nu == candidate1) count1++;
            else if (nu == candidate2) count2++;
        }
        
        if (count1 > threshold) ans.push_back(candidate1);
        if (count2 > threshold) ans.push_back(candidate2);
        return ans;

        

    }
};
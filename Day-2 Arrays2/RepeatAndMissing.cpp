class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long sumNums = 0;
        long long sumNumsSq = 0;

        long long n = nums.size();

        long long sumN = n*(n+1)/2;
        long long sumNSq = 0;
        for (int i = 1; i <= n; i++)
        {
            sumNSq += (i*i);
            sumNums += nums[i-1];
            sumNumsSq += (nums[i-1] * nums[i-1]);
        }

        // x-> twice
        // y-> missing

        // eq-1: x-y
        long long eq1 = sumNums - sumN;

        // eq-2: x2 - y2
        long long eq2 = sumNumsSq - sumNSq;

        // eq-3: x+y
        long long eq3 = eq2/eq1;

        long long x = abs(eq1 + eq3)/2;
        long long y = x - eq1;

        return vector<int>{(int)x, (int)y};

        

    }
};
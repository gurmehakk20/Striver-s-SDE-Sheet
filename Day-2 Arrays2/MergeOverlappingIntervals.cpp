class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> res;
        sort(inter.begin(), inter.end());
        int n = inter.size();
        res.push_back(inter[0]);
        for (int i = 1; i < n; i++)
        {
            if (res.back()[1] >= inter[i][0])
            {
                res.back()[1] = max(res.back()[1], inter[i][1]);
            }
            else 
            {
                res.push_back(inter[i]);
            }
        }

        return res;
    }
};
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> pascal;

        for (int i = 1; i <= n; i++)
        {
            vector<int> temp(i, 1);
            pascal.push_back(temp);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j!= 0 && j != i)
                {
                    pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
                }
            }
        }

        return pascal;
    }
};
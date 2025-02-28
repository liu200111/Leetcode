class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows, vector<int>(1, 1));
        // 1
        if (numRows == 1) return ans;

        // 2
        ans[1].push_back(1);
        if (numRows == 2) return ans;

        // Greater than 2
        int num = 1;
        while (num < numRows - 1) {
            for (int i = 0; i < num; ++i) {
                ans[num+1].push_back(ans[num][i] + ans[num][i+1]);
            }
            ans[num+1].push_back(1);
            num++;
        }
        return ans;
    }
};

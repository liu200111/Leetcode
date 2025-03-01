class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(1, 1);
        // 0
        if (rowIndex == 0) return ans;

        // 1
        ans.push_back(1);
        if (rowIndex == 1) return ans;

        // Greater than 1
        vector<int> pre = ans;
        int num = 1;
        while (num < rowIndex) {
            ans = {1, 1};
            for (int i = 0; i < pre.size()-1; ++i) {
                ans.insert(ans.begin()+1, pre[i]+pre[i+1]);
            }
            pre = ans;
            num++;
        }
        return ans;
    }
};

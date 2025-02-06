class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<vector<int>> group;
        int group_num = 0;
        bool add = true;

        for ( int i = 0 ; i < nums.size() - 2; ++i ) {
            for ( int j = i + 1 ; j < nums.size() - 1; ++j ) {
                for ( int k = j + 1 ; k < nums.size(); ++k) {
                    if ( nums[i] + nums[j] + nums[k] == 0 ) {
                        add = true;
                        
                        group.push_back({nums[i], nums[j], nums[k]});
                        sort(group[group_num].begin(), group[group_num].end());

                        for (int p = 0; p < ans.size(); ++p) {
                            if (group[group_num] == ans[p]) {
                                add = false;
                                break;
                            }
                        }
                        if (add)
                        ans.push_back(group[group_num]);
                        ++group_num;
                    }
                }
            }
        }
        return ans;
    }
    
};

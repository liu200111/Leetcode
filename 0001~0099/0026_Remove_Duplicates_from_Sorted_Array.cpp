class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        int pre = ans[0];
        for ( int i = 1; i < nums.size(); ++i ) {
            if ( nums[i] != pre ) {
                ans.push_back(nums[i]);
                pre = nums[i];
            }
        }
        nums = ans;
        return nums.size();
    }
};

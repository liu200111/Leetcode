class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        // handling empty input
        if ( nums.size() == 0 ) return ans;

        // get the first position
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                ans[0] = i;
                break;
            }
            else if (nums[i] > target) return ans;  // If the target is not met
        }

        // processing target is the last one
        if (ans[0] == nums.size() - 1) {
            ans[1] = ans[0];
            return ans;
        }

        // get the last position
        for (int i = ans[0] + 1; i < nums.size(); ++i) {
            if (nums[i] != target) {
                ans[1] = i -1;
                return ans;
            }
            else if ( i == nums.size() - 1) 
                ans[1] = i;
        }
        return ans;
    }
};

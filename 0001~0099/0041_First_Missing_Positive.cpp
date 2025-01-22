class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int ans = 1;
        for (int i = nums.size() - 1 ; i >= 0 ; --i) {
            if (nums[i] < ans)
                continue;
            else if (nums[i] == ans)
                ++ans;
            else 
                return ans;
        }
        return ans;
    }
};

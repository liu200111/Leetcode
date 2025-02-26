class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        while (nums.size() > 1) {
            if (nums[0] == nums[1]) {
                nums.erase(nums.begin(), nums.begin()+2);
            }
            else return nums[0];
        }
        return nums[0];
    }
};

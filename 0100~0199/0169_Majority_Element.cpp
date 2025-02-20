class Solution {
public:
    // The majority element is the element that appears more than ⌊n / 2⌋ times.
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

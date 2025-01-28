class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count = {0, 0, 0};
        for ( int i = 0; i < nums.size(); ++i ) {
            if ( nums[i] == 0 )
                ++count[0];
            else if ( nums[i] == 1 )
                ++count[1];
            else if ( nums[i] == 2 )
                ++count[2];
        }
        
        // printf("%d\n", count[0]);
        // printf("%d\n", count[1]);
        // printf("%d\n", count[2]);
        
        for ( int i = 0; i < count[0]; ++i )
            nums[i] = 0;
        for ( int i = 0; i < count[1]; ++i )
            nums[i + count[0]] = 1;
        for ( int i = 0; i < count[2]; ++i )
            nums[i + count[0] + count[1]] = 2;
    }
};

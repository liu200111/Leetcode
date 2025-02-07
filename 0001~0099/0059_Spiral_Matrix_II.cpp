class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int num = 1;
        int boundary_up = 0;
        int boundary_down = n-1;
        int boundary_left = 0;
        int boundary_right = n-1;
        while ( num <= pow(n, 2) ) {
            // move right
            for (int i = boundary_left; i <= boundary_right; ++i) {
                ans[boundary_up][i] = num;
                ++num;
            }
            boundary_up++;

            // move down
            for (int i = boundary_up; i <= boundary_down; ++i) {
                ans[i][boundary_right] = num;
                ++num;
            }
            boundary_right--;

            // move left
            for (int i = boundary_right; i >= boundary_left; --i) {
                ans[boundary_down][i] = num;
                ++num;
            }
            boundary_down--;

            // move up
            for (int i = boundary_down; i >= boundary_up; --i) {
                ans[i][boundary_left] = num;
                ++num;
            }
            boundary_left++;
        }
        return ans;
    }
};

class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        while ( (long long) ans * ans < x ) {
            ++ans;
        }
        if ( (long long) ans * ans == x)
            return ans;
        else
            return ans - 1;
    }
};

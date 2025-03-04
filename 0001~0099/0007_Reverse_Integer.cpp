class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int remainder = 0;
        while ( x != 0 ) {
            remainder = x % 10;
            x = x / 10;

            // Use INT_MAX and INT_MIN directly.
            // They are defined in <limits> as 2147483647 and -2147483648, respectively.
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && remainder > 7)) 
                return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && remainder < -8)) 
                return 0;
            
            ans = ans * 10 + remainder;
        }
        return ans;
    }
};

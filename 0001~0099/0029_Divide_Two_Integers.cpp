class Solution {
public:
    int divide(int dividend, int divisor) {
        int ans = 0;
        int remainder = dividend;
      
        //Handle overflow
        if (dividend == INT_MIN && divisor == -1) return INT_MAX; 
        if (dividend == INT_MIN && divisor == 1) return INT_MIN;
        if (dividend == INT_MIN && divisor == INT_MIN) return 1; 
        else if (divisor == INT_MIN) return 0;
      
        //Time Limit
        if (dividend == INT_MAX && divisor == -1) return -INT_MAX;

        //Calculate
        if (dividend < 0) {
            while (remainder <= -abs(divisor)) {
                remainder += abs(divisor);
                ++ans;
            }
        }
        else {
            while (remainder >= abs(divisor)) {
                remainder -= abs(divisor);
                ++ans;
            }
        }
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) return -ans;
        else return ans;
    }
};

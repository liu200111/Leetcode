class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans = 0;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX; // Handle Overflow
        if (dividend == INT_MAX && divisor == -1) return -INT_MAX; // Handle Time Limit

        long long divid = labs(dividend);
        long long divis = labs(divisor);
        
        while ( divid >= divis ) {
            divid -= divis;
            ++ans;
        }

        if ( (dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0) ) return -ans;
        else return ans;
    }
};

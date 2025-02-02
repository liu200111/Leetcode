class Solution {
public:
    double myPow(double x, int n) {
        // excluding special cases
        if ( n == 0 || x == 1 || (x == -1 && n % 2 == 0) ) return 1;
        if ( n == 1 ) return x;
        if ( n == -1 ) return 1/x;
        if ( x == -1 && n % 2 == 1 ) return -1;
        if ( n == INT_MAX || n == INT_MIN ) return 0;

        // calculate
        double num = x; 
        while ( n > 1 ) {
            x *= num;
            --n;
        }
        while ( n < -1 ) {
            x *= num;
            ++n;
        }

        if ( n > 0 ) return x;
        else return 1/x;
    }
};

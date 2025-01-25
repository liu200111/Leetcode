class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int plus = 1;
        if ( checkallnine(digits) ) {
            for ( int i = 0; i < digits.size(); ++i )
                digits[i] = 0;
            digits.insert( digits.begin(), 1 );
            
        }
        else {
            for ( int i = digits.size() - 1; i >= 0; --i ) {
                digits[i] += plus;
            if (digits[i] == 10)
                digits[i] = 0;
            else
                return digits;
            }
        }
        return digits;
    }
    bool checkallnine(vector<int> digits) {
        int count = 0;
        for ( int i = digits.size() - 1; i >= 0; --i ) {
            if (digits[i] == 9)
                ++count;
        }
        if (count == digits.size()) return true;
        else return false;
    }
};

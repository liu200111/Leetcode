class Solution {
public:
    string longestPalindrome(string s) {
        string str;         
        string str_long;
        int check_Palindromic = 0;
        for ( int i = 0 ; i < s.length() ; ++i ) {
            for ( int j = s.length() ; j > i + 1 ; --j ) {
                if ( s[j - 1] == s[i] ) {
                    str = s.substr(i, j - i);
                    if ( checkisPalindrome(str) && str.length() > str_long.length() ) {
                        str_long = str;
                        check_Palindromic = 1;
                    }
                }
            }
        }
        if ( check_Palindromic == 1 )
            return str_long;
        else
            return s.substr(0, 1);
    }
    bool checkisPalindrome(string str) {
        int length = str.length();
        for ( int i = 0 ; i < length / 2 + 1 ; ++i ) {
            if ( str[i] != str[ length - 1 - i] )
                return false;
        }
        return true;
    }
};

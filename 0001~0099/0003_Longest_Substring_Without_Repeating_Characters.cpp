class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len_max = 0;
        int repeat = 0;
        if ( s.length() == 0 )
            return 0;
        else {
            for ( int i = 1 ; i < s.length() ; ++i ) {
                int num_diff = 0;
                for (int j = i - 1 ; j >= repeat ; --j ) {
                    if ( s[j] == s[i]) {
                        repeat = ++j;
                        break;
                    }
                    else
                        num_diff++;
                }
                if ( num_diff > len_max )
                    len_max = num_diff;
            }
        return len_max + 1;
        }
    }
};

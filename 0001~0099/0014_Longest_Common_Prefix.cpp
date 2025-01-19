class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int count = 0;
        for ( int i = 0 ; i < strs[0].size() ; ++i ) {
            for (int j = 1 ; j < strs.size() ; ++j ) {
                if ( strs[0][i] == strs[j][i] )
                    count += 1;
            }
            if ( count == strs.size() - 1 )
                ans += strs[0][i];
            else 
                return ans;
            count = 0;
        }
        return ans;
    }
};

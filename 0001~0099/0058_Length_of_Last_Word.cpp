class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int stop = 0;
        for ( int i = s.length() - 1; i >= 0; --i) {
            if (s[i] != ' ') {
                ++ans;
                stop = 1;
            }
            else if (stop == 1)
                return ans;
        }
        return ans;
    }
};

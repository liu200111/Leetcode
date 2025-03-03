class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        for (int i = 0; i < s.length(); ++i) 
            if (findtheFirst(s, s[i]) != findtheFirst(t, t[i])) return false;
        
        return true;
    }
    int findtheFirst(string str, char target) {
        int position;

        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == target) {
                position = i;
                break;
            }
        }
        return position;
    }
};

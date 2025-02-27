class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 1) return true;

        // change
        string s_changed = "";
        for (char c : s) {
            if (change(c) != '*') s_changed += change(c);
        }

        // check
        int left = 0;
        int right = s_changed.length()-1;
        while (right > left) {
            if (s_changed[left] != s_changed[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    char change(char c) {
        if (c >= 'A' && c <= 'Z') return char(int(c)+32);
        else if (c >= 'a' && c <= 'z') return c;
        else if (c >= '0' && c <= '9') return c;
        return '*'; // The rest will not be used
    }
};

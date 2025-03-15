class Solution {
public:
    int myAtoi(string s) {
        bool erase_zero = false;
        long long ans;

        while (s[0] == '0') {
            s.erase(0, 1);
            erase_zero = true;
        }

        while (s[0] == ' ') {
            s.erase(0, 1);
        }

        if (s[0] == '-' && !erase_zero) {
            s.erase(0, 1);
            while (s[0] == '0') {
                s.erase(0, 1);
                erase_zero = true;
            }
            if (checkClear(s).length() > 0)
                ans = stoll(checkClear(s));
            else return 0;

            if (ans > INT_MAX) return 2147483648;
            return -ans;
        }
        else if (s[0] == '+' && !erase_zero) {
            s.erase(0, 1);
            while (s[0] == '0') {
                s.erase(0, 1);
                erase_zero = true;
            }
            if (checkClear(s).length() > 0)
                ans = stoll(checkClear(s));
            else return 0;

            if (ans > INT_MAX) return 2147483647;
            return ans;
        }
        else if (s[0] - '0' <= 9 && s[0] - '0' >= 0) {
            if (checkClear(s).length() > 0)
                ans = stoll(checkClear(s));
            else return 0;

            if (ans > INT_MAX) return 2147483647;
            return ans;
        } 
        else return 0;
    }
    string checkClear(string str) {
        string clear_str;
        if (str[0] > '9' || str[0] < '0') return clear_str;
        for (char c : str) {
            if ( c > '9' || c < '0') break;
            else clear_str += c;
        }
        return clear_str;
    }
};

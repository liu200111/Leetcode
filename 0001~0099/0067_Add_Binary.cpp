class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carrier = 0;

        // fill shorter string
        while (a.length() > b.length()) 
            b.insert(b.begin(), '0');
        while (a.length() < b.length())
            a.insert(a.begin(), '0');

        
        // prevent the first digit from being carried
        ans.resize(a.length() + 1, '0');

        // add
        for (int i = a.length() - 1; i >= 0; --i) {
            if (a[i] == '1' && b[i] == '1') {
                if (carrier == 0) // (1+1+0)
                    ans[i + 1] = '0';
                else // (1+1+1)
                    ans[i + 1] = '1';
                carrier = 1;
            }
            else if (a[i] == '0' && b[i] == '0') {
                if (carrier == 0) // (0+0+0)
                    ans[i + 1] = '0';
                else // (0+0+1)
                    ans[i + 1] = '1';
                carrier = 0;
            }
            else {
                if (carrier == 0) { // (1+0+0)
                    ans[i + 1] = '1';
                    carrier = 0;
                }
                else { // (1+0+1)
                    ans[i + 1] = '0';
                    carrier = 1;
                }
            }
        }

        if (carrier == 1) // handle carry
            ans[0] = '1';
        else // remove unnecessary zero
            ans.erase(ans.begin());

        return ans;
    }
};

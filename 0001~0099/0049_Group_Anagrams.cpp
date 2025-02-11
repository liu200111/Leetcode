class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans = {{""}};
        bool first = true;
        int num = 0;
        int i = 1;
        ans[num][0] = strs[num];
        while ( num < strs.size() ) {
            if (!first) {
                vector<string> temp = {""};
                ans.push_back(temp);
            }
            ans[num][0] = strs[num];
            while ( i < strs.size() ) {
                if ( checkAnagram(ans[num][0], strs[i]) ) {
                    ans[num].push_back(strs[i]);
                    strs.erase( strs.begin()+i );
                }
                else i++;
            }
            num++;
            i = num+1;
            first = false;
        }
        return ans;
    }
    bool checkAnagram(string target, string input) {
        if ( target.length() != input.length() ) return false;
        else {
            int count = 0;
            for (int i = 0; i < target.length(); ++i) {
                for (int j = 0; j < target.length(); ++j) {
                    if (target[i] == input[j]) {
                        count = 1;
                        input.erase(j, 1);
                        break;
                    } 
                }
                if (count == 0) return false;
                count = 0;
            }
            return true;
        }
    }
};
